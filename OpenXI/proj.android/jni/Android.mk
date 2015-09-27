LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

$(call import-add-path,$(LOCAL_PATH)/../../cocos2d)
$(call import-add-path,$(LOCAL_PATH)/../../cocos2d/external)
$(call import-add-path,$(LOCAL_PATH)/../../cocos2d/cocos)

LOCAL_MODULE := cocos2dcpp_shared

LOCAL_MODULE_FILENAME := libcocos2dcpp

LOCAL_SRC_FILES := hellocpp/main.cpp \
                   ../../Classes/AppDelegate.cpp \
                   ../../Classes/HelloWorldScene.cpp \
                   ../../Classes/CharacterMechanics/GenericAICharacter.cpp \
                   ../../Classes/CharacterMechanics/GenericPlayerCharacter.cpp \
                   ../../Classes/CharacterMechanics/InventoryItem.cpp \
                   ../../Classes/ExtraUtils/InfiniteParallaxNode.cpp \
                   ../../Classes/GameMechanics/GameMasterControl.cpp \
                   ../../Classes/GameScreens/GenericSpeechBar.cpp \
                   ../../Classes/GameScreens/InGameHUD.cpp \
                   ../../Classes/GameScreens/InGameSettings.cpp \
                   ../../Classes/GameScreens/MainScreen.cpp \
                   ../../Classes/GameScreens/PlayerInventoryHud.cpp \

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../Classes \
					$(LOCAL_PATH)/../../Classes/CharacterMechanics \
					$(LOCAL_PATH)/../../Classes/ExtraUtils \
					$(LOCAL_PATH)/../../Classes/GameMechanics \
					$(LOCAL_PATH)/../../Classes/GameScreens \

# _COCOS_HEADER_ANDROID_BEGIN
# _COCOS_HEADER_ANDROID_END


LOCAL_STATIC_LIBRARIES := cocos2dx_static

# _COCOS_LIB_ANDROID_BEGIN
# _COCOS_LIB_ANDROID_END

include $(BUILD_SHARED_LIBRARY)

$(call import-module,.)

# _COCOS_LIB_IMPORT_ANDROID_BEGIN
# _COCOS_LIB_IMPORT_ANDROID_END
