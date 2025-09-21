@interface CNVCardUserDefaults : NSObject

+ (char)boolForKey:(id)a0;
+ (id)objectForKey:(id)a0;
+ (long long)integerForKey:(id)a0;
+ (unsigned long long)outputFormat;
+ (long long)defaultNameOrdering;
+ (char)includeNotesInVCards;
+ (char)includePhotosInVCards;
+ (id)vCardPrivateFields;
+ (char)debugLogEnabled;
+ (id)vCard21Encoding;
+ (char)includeUserSettings;
+ (char)isPrivateVCardFieldsEnabled;

@end
