@interface CNVCardUserDefaults : NSObject

+ (unsigned long long)outputFormat;
+ (long long)integerForKey:(id)a0;
+ (BOOL)boolForKey:(id)a0;
+ (id)objectForKey:(id)a0;
+ (BOOL)isPrivateVCardFieldsEnabled;
+ (BOOL)includeUserSettings;
+ (long long)defaultNameOrdering;
+ (BOOL)debugLogEnabled;
+ (id)vCardPrivateFields;
+ (BOOL)includePhotosInVCards;
+ (id)vCard21Encoding;
+ (BOOL)includeNotesInVCards;

@end
