@interface NviUtils : NSObject

+ (id)timeStampString;
+ (BOOL)isNviEnabled;
+ (id)strRepForNviSignalType:(unsigned long long)a0;
+ (id)strRepForNviSignalMask:(unsigned long long)a0;
+ (unsigned long long)nviSignalTypeForStr:(id)a0;
+ (id)strRepForNviDataSourceType:(unsigned long long)a0;
+ (unsigned long long)nviDataSourceTypeForStr:(id)a0;
+ (BOOL)_createDirAtPath:(id)a0;
+ (long long)getVoiceTriggerEndSampleCountFromVTEI:(id)a0;
+ (double)getVoiceTriggerEndSecsFromVTEI:(id)a0;
+ (id)readJsonDictionaryAt:(id)a0;
+ (id)getValueFromDictionaryOfDictionaries:(id)a0 keypath:(id)a1;
+ (BOOL)createDirAtPath:(id)a0;

@end
