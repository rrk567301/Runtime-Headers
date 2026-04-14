@interface SRSSControlCenterSupport_ObjC : NSObject

+ (id)currentLanguages;
+ (id)sharedAudioDeviceManager;
+ (BOOL)voiceControlEnabled;
+ (id)listeningUpdateNotificationName;
+ (void)selectLanguage:(id)a0;
+ (id)languageUpdateNotificationNames;
+ (id)clamshellChangedNotification;
+ (id)currentMicrophones;
+ (id)goToSleepNotificationName;
+ (id)inputDeviceChangedNotificationName;
+ (id)listeningUpdateKey;
+ (id)microphoneUpdateNotificationName;
+ (void)monitorMicrophoneLevelsWithCallback:(id /* block */)a0;
+ (void)selectMicrophone:(id)a0;
+ (id)voiceControlEnabledNotificationName;
+ (id)wakeUpNotificationName;

@end
