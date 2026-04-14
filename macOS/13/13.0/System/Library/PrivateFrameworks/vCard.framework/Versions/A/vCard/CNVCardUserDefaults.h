@interface CNVCardUserDefaults : NSObject

+ (id)objectForKey:(id)a0;
+ (BOOL)boolForKey:(id)a0;
+ (unsigned long long)outputFormat;
+ (long long)integerForKey:(id)a0;
+ (long long)defaultNameOrdering;
+ (id)vCardPrivateFields;
+ (BOOL)includeNotesInVCards;
+ (BOOL)includePhotosInVCards;
+ (BOOL)includeUserSettings;
+ (BOOL)isPrivateVCardFieldsEnabled;
+ (id)vCard21Encoding;
+ (BOOL)debugLogEnabled;

@end
