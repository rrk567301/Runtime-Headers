@interface CNVCardUserDefaults : NSObject

+ (long long)integerForKey:(id)a0;
+ (BOOL)boolForKey:(id)a0;
+ (id)objectForKey:(id)a0;
+ (BOOL)isPrivateVCardFieldsEnabled;
+ (BOOL)includeUserSettings;
+ (unsigned long long)outputFormat;
+ (BOOL)debugLogEnabled;
+ (id)vCard21Encoding;
+ (long long)defaultNameOrdering;
+ (id)vCardPrivateFields;
+ (BOOL)includeNotesInVCards;
+ (BOOL)includePhotosInVCards;

@end
