@interface CNVCardUserDefaults : NSObject

+ (long long)integerForKey:(id)a0;
+ (unsigned long long)outputFormat;
+ (BOOL)boolForKey:(id)a0;
+ (BOOL)includePhotosInVCards;
+ (id)objectForKey:(id)a0;
+ (id)vCardPrivateFields;
+ (id)vCard21Encoding;
+ (BOOL)debugLogEnabled;
+ (BOOL)includeUserSettings;
+ (BOOL)includeNotesInVCards;
+ (BOOL)isPrivateVCardFieldsEnabled;
+ (long long)defaultNameOrdering;

@end
