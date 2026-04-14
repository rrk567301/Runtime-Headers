@interface PowerUITTEUtility : NSObject

+ (float)fetchPresentSOC;
+ (float)calculateActualPowerWithDefaults:(id)a0 withStartEnergy:(float *)a1 withCurrentEnergy:(float *)a2;
+ (float)fetchPresentRemEnergy;
+ (float)fetchPresentTemperature;
+ (int)fetchWatchModelType;
+ (id)findTimeBuckets:(id)a0;
+ (id)getTTEDatafromSMC;
+ (id)readPlistToDictionary:(id)a0;
+ (id)safeExtractDictionary:(id)a0 forKey:(id)a1;
+ (id)safeExtractNumber:(id)a0 forKey:(id)a1;
+ (id)safeFetchNumberFromDefaults:(id)a0 forKey:(id)a1 functionName:(id)a2;
+ (float)safeFetchPosFloatFromDefaults:(id)a0 forKey:(id)a1;
+ (int)safeFetchPosIntFromDefaults:(id)a0 forKey:(id)a1;
+ (id)searchValueForPlist:(id)a0 withKeyArray:(id)a1;
+ (id)stringForTriggerReason:(unsigned long long)a0;
+ (BOOL)writeDictionaryToPlist:(id)a0 withFilePath:(id)a1;

@end
