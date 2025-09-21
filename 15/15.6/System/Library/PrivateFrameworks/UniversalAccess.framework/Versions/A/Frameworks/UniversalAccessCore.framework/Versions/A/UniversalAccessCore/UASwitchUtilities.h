@interface UASwitchUtilities : NSObject

+ (char)_switchHIDDictionary:(id)a0 conflictsWithDictionary:(id)a1 withinSameFeature:(char)a2;
+ (id)_hidDictionaryDeviceKeysToCompare;
+ (char)_switchHIDDictionary:(id)a0 deviceConflictsWithDictionary:(id)a1 withinSameFeature:(char)a2;
+ (char)switchHIDDictionary:(id)a0 conflictsWithDictionaries:(id)a1 withinSameFeature:(char)a2 outConflictingIndex:(unsigned long long *)a3;

@end
