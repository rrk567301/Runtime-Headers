@interface AMDictationServicesSoftLinking : NSObject

+ (void *)framework;
+ (void)softLink;
+ (id)kSODictationCustomCommandIdentifierKey;
+ (void /* function */ *)SODictationCommandPropertiesRegistered;
+ (void /* function */ *)SODictationGetURLForOpenFileCommandProperties;
+ (id)kSODictationCustomCommandTitleKey;
+ (id)kSODictationCustomCommandEnabledKey;
+ (void /* function */ *)SODictationSynchronizeOpenFileCommandProperties;
+ (id)kSODictationCustomCommandChangedNotification;

@end
