@class NSString, NSMutableDictionary, NSArray, NSDictionary, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface PLEntry : NSObject <NSCopying>

@property (retain) NSMutableDictionary *dictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;
@property (readonly) NSMutableArray *keys;
@property (readonly, getter=allValues) NSMutableArray *values;
@property (readonly) char hasDynamicKeys;
@property (readonly) char hasArrayKeys;
@property (readonly) char hasDMAKeys;
@property (readonly) NSArray *definedKeys;
@property (readonly) NSArray *dynamicKeys;
@property (readonly) NSArray *arrayKeys;
@property (readonly) NSArray *DMAKeys;
@property char existsInDB;
@property char isErrorEntry;
@property char writeToDB;
@property (retain, nonatomic) NSDictionary *entryDefinition;
@property (retain, nonatomic) NSDate *entryDate;
@property (retain, nonatomic) NSString *entryKey;
@property (readonly) id subEntryKey;
@property (nonatomic) long long entryID;

+ (void)load;
+ (Class)classForEntryKey:(id)a0;
+ (short)dataFormatForMetric:(id)a0 auxiliaryMetrics:(id)a1;
+ (id)entryKey;
+ (id)entryWithEntryKey:(id)a0 withData:(id)a1;
+ (id)entryWithEntryKey:(id)a0 withRawData:(id)a1;
+ (void)registerEntry:(Class)a0;
+ (id)summarizeAggregateEntries:(id)a0;
+ (id)summarizeAggregateEntries:(id)a0 withPrimaryKeys:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (long long)compare:(id)a0 options:(short)a1;
- (id)serialized;
- (void)setObjectsUsingMetricsFromData:(id)a0;
- (id)descriptionRespectingAllowlist:(char)a0;
- (short)formaterForKey:(id)a0;
- (void)loadDynamicKeys;
- (void)checkOverridesEntryDateWithNowDate:(id)a0;
- (id)definitionForKey:(id)a0;
- (char)filterEntryLogging;
- (char)hasAppIdentifierKeys;
- (id)initEntryWithData:(id)a0;
- (id)initEntryWithRawData:(id)a0;
- (id)initWithEntryDate:(id)a0;
- (id)initWithEntryKey:(id)a0;
- (id)initWithEntryKey:(id)a0 withData:(id)a1;
- (id)initWithEntryKey:(id)a0 withDate:(id)a1;
- (id)initWithEntryKey:(id)a0 withRawData:(id)a1;
- (char)isKeyAggregateValue:(id)a0;
- (char)isKeyDynamic:(id)a0;
- (char)isPPSEnabled;
- (id)keyValuePathForKey:(id)a0;
- (id)serializedForJSON;
- (void)setDynamicObjectsFromRawData:(id)a0;
- (void)setObjectsFromData:(id)a0;
- (void)setObjectsFromRawData:(id)a0;
- (int)staticArraySizeForKey:(id)a0;
- (id)unitForKey:(id)a0;

@end
