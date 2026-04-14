@interface CNVCardUserDefaults : NSObject

+ (id)objectForKey:(id)a0;
+ (BOOL)boolForKey:(id)a0;
+ (long long)integerForKey:(id)a0;
+ (unsigned long long)outputFormat;
+ (long long)defaultNameOrdering;
+ (id)vCardPrivateFields;
+ (BOOL)includeNotesInVCards;
+ (BOOL)includePhotosInVCards;
+ (id)vCard21Encoding;
+ (BOOL)includeUserSettings;
+ (BOOL)isPrivateVCardFieldsEnabled;
+ (BOOL)debugLogEnabled;

@end
