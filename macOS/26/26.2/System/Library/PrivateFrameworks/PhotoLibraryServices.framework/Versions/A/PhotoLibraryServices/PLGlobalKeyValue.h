@class NSNumber, NSString, NSDate;
@protocol NSSecureCoding;

@interface PLGlobalKeyValue : PLManagedObject

@property (retain, nonatomic) NSNumber *integerGlobalValue;
@property (retain, nonatomic) NSNumber *boolGlobalValue;
@property (retain, nonatomic) id<NSSecureCoding> anyGlobalValue;
@property (retain, nonatomic) NSDate *dateGlobalValue;
@property (retain, nonatomic) NSNumber *doubleValue;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSNumber *integerValue;
@property (retain, nonatomic) NSNumber *boolValue;
@property (retain, nonatomic) NSDate *dateValue;
@property (retain, nonatomic) id<NSSecureCoding> anyValue;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) short type;

+ (id)entityName;
+ (void)initialize;
+ (id)fetchGlobalKeyValuesForKeys:(id)a0 withManagedObjectContext:(id)a1;
+ (id)allDecodeClasses;
+ (id)attributesForKey;
+ (void)setGlobalValue:(id)a0 forKey:(id)a1 managedObjectContext:(id)a2;
+ (id)globalValueForKey:(id)a0 managedObjectContext:(id)a1;
+ (id)globalValuesForKeys:(id)a0 managedObjectContext:(id)a1;
+ (id)_debugDescriptionDateFormatter;
+ (short)typeForKey:(id)a0;
+ (id)_globalValueForKeyValue:(id)a0;
+ (id)dictionaryWithManagedObjectContext:(id)a0 forMigrationHistory:(BOOL)a1;
+ (void)_setGlobalValue:(id)a0 forKeyValue:(id)a1 managedObjectContext:(id)a2;
+ (void)migrateLocaleIdentifierToGlobalKeyValues:(id)a0 withPathManager:(id)a1;
+ (void)checkTypeForKey:(id)a0 andValue:(id)a1;
+ (id)debugDescriptionOfValue:(id)a0 forKey:(id)a1;
+ (void)populateWithDictionary:(id)a0 managedObjectContext:(id)a1 replaceExisting:(BOOL)a2;
+ (id)fetchGlobalKeyValueForKey:(id)a0 withManagedObjectContext:(id)a1 createIfMissing:(BOOL)a2;

- (BOOL)supportsCloudUpload;

@end
