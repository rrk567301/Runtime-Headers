@interface CNVCardUserDefaults : NSObject

+ (unsigned long long)outputFormat;
+ (BOOL)debugLogEnabled;
+ (BOOL)boolForKey:(id)a0;
+ (id)vCard21Encoding;
+ (long long)integerForKey:(id)a0;
+ (BOOL)includePhotosInVCards;
+ (long long)defaultNameOrdering;
+ (BOOL)includeNotesInVCards;
+ (id)objectForKey:(id)a0;
+ (id)vCardPrivateFields;
+ (BOOL)includeUserSettings;
+ (BOOL)isPrivateVCardFieldsEnabled;

@end
