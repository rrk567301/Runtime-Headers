@interface AMDictationServicesSoftLinking : NSObject

+ (void *)framework;
+ (void)softLink;
+ (id)kSODictationCustomCommandTitleKey;
+ (id)kSODictationCustomCommandIdentifierKey;
+ (id)kSODictationCustomCommandEnabledKey;
+ (id)kSODictationCustomCommandChangedNotification;
+ (void /* function */ *)SODictationCommandPropertiesRegistered;
+ (void /* function */ *)SODictationGetURLForOpenFileCommandProperties;
+ (void /* function */ *)SODictationSynchronizeOpenFileCommandProperties;

@end
