@interface VTUtteranceMetadataManager : NSObject

+ (char)_audioDirectoryNeedsUpgrade:(id)a0;
+ (id)_getBaseMetaDictionaryForUtterancePath:(id)a0;
+ (void)_saveMetaVersionFileAtPath:(id)a0;
+ (void)_upgradeLocaleDirectoryIfNecessary:(id)a0;
+ (void)_upgradeUtteranceMeta:(id)a0;
+ (void)_writeMetaDict:(id)a0 forUtterancePath:(id)a1;
+ (char)isUtteranceImplicitlyTrained:(id)a0;
+ (id)recordedTimeStampOfFile:(id)a0;
+ (void)saveMetaVersionFileAtSATAudioDirectory:(id)a0;
+ (void)saveUtteranceMetadataForUtterance:(id)a0 isExplicitEnrollment:(char)a1 isHandheldEnrollment:(char)a2 withBiometricResult:(unsigned long long)a3;
+ (void)upgradeMetaFilesIfNecessaaryAtSATRoot:(id)a0;

@end
