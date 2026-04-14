@interface CNVCardUserDefaults : NSObject

+ (BOOL)boolForKey:(id)a0;
+ (unsigned long long)outputFormat;
+ (BOOL)includePhotosInVCards;
+ (BOOL)isPrivateVCardFieldsEnabled;
+ (BOOL)debugLogEnabled;
+ (long long)integerForKey:(id)a0;
+ (id)objectForKey:(id)a0;
+ (id)vCardPrivateFields;
+ (id)vCard21Encoding;
+ (BOOL)includeUserSettings;
+ (BOOL)includeNotesInVCards;
+ (long long)defaultNameOrdering;

@end
