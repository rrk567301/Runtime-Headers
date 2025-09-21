@interface AFUtilitiesWrapper : NSObject

+ (char)deviceSupportsOnDeviceDictation;
+ (char)deviceSupportsSiriUOD;
+ (char)isDictationLanguageInstalledForOnDeviceDictation:(id)a0 offlineDictationStatus:(id)a1;
+ (char)offlineDictationCapable;
+ (char)shouldRunAsrOnServerForUOD;
+ (char)uodStatusSupportedFull:(id)a0 languageCode:(id)a1;

@end
