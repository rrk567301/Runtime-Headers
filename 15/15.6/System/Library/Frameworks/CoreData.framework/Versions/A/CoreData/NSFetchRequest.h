@class NSString, NSArray, NSPredicate, NSEntityDescription;

@interface NSFetchRequest : NSPersistentStoreRequest <NSSecureCoding, NSCoding, NSCopying> {
    NSArray *_groupByProperties;
    NSPredicate *_havingPredicate;
    struct _NSExtraFetchRequestIVars { unsigned long long x0; _Atomic id x1; _Atomic BOOL x2; _Atomic BOOL x3; _Atomic BOOL x4; _Atomic BOOL x5; _Atomic BOOL x6; _Atomic BOOL x7; } *_additionalPrivateIvars;
    NSArray *_valuesToFetch;
    _Atomic id _entity;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    unsigned long long _batchSize;
    unsigned long long _fetchLimit;
    unsigned long long _allocationSize;
    NSArray *_relationshipKeyPathsForPrefetching;
    struct _fetchRequestFlags { unsigned char distinctValuesOnly : 1; unsigned char includesSubentities : 1; unsigned char includesPropertyValues : 1; unsigned char resultType : 3; unsigned char returnsObjectsAsFaults : 1; unsigned char excludePendingChanges : 1; unsigned char isInUse : 1; unsigned char old_entityIsName : 1; unsigned char refreshesRefetched : 1; unsigned char old_propertiesValidated : 1; unsigned char old_expressionsValidated : 1; unsigned char disableCaching : 1; unsigned char allocationType : 3; unsigned char batchLRUEntries : 4; unsigned short _RESERVED : 11; } _flags;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char purgeableResult;
@property (retain, nonatomic) NSEntityDescription *entity;
@property (readonly, nonatomic) NSString *entityName;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) unsigned long long fetchLimit;
@property (retain, nonatomic) NSArray *affectedStores;
@property (nonatomic) unsigned long long resultType;
@property (nonatomic) char includesSubentities;
@property (nonatomic) char includesPropertyValues;
@property (nonatomic) char returnsObjectsAsFaults;
@property (copy, nonatomic) NSArray *relationshipKeyPathsForPrefetching;
@property (nonatomic) char includesPendingChanges;
@property (nonatomic) char returnsDistinctResults;
@property (copy, nonatomic) NSArray *propertiesToFetch;
@property (nonatomic) unsigned long long fetchOffset;
@property (nonatomic) unsigned long long fetchBatchSize;
@property (nonatomic) char shouldRefreshRefetchedObjects;
@property (copy, nonatomic) NSArray *propertiesToGroupBy;
@property (retain, nonatomic) NSPredicate *havingPredicate;

+ (void)initialize;
+ (char)accessInstanceVariablesDirectly;
+ (id)fetchRequestWithEntityName:(id)a0;
+ (id)_newDenormalizedFetchProperties:(id)a0;
+ (id)_stringForFetchRequestResultType:(unsigned long long)a0;
+ (id)decodeFromXPCArchive:(id)a0 withContext:(id)a1 andPolicy:(id)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)allowEvaluation;
- (id)initWithEntityName:(id)a0;
- (void)setAllocationType:(unsigned long long)a0;
- (unsigned long long)allocationSize;
- (char)_isAsyncRequest;
- (id)_XPCEncodedFlags;
- (id)_asyncResultHandle;
- (id)_copyForDirtyContext;
- (char)_disablePersistentStoreResultCaching;
- (unsigned long long)_encodedFetchRequestFlagsForFlags:(unsigned long long)a0;
- (unsigned long long)_fetchBatchLRUEntriesLimit;
- (void)_incrementInUseCounter;
- (char)_isCachingFetchRequest;
- (char)_isEditable;
- (void)_resolveEntityWithContext:(id)a0;
- (void)_setAsyncResultHandle:(id)a0;
- (void)_setDisablePersistentStoreResultCaching:(char)a0;
- (void)_setFetchBatchLRUEntriesLimit:(unsigned long long)a0;
- (void)_setFlagsFromXPCEncoding:(id)a0;
- (void)_throwIfNotEditable;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 uniquedMappings:(id)a5 entities:(id)a6;
- (unsigned long long)allocationType;
- (id)encodeForXPC;
- (char)excludesPendingChanges;
- (id)execute:(id *)a0;
- (char)includeRowData;
- (id)prefetchRelationshipKeys;
- (char)prepopulateObjects;
- (unsigned long long)requestType;
- (char)resultsAsObjectIDs;
- (void)setAllocationSize:(unsigned long long)a0;
- (void)setExcludesPendingChanges:(char)a0;
- (void)setIncludeRowData:(char)a0;
- (void)setPrefetchRelationshipKeys:(id)a0;
- (void)setPrepopulateObjects:(char)a0;
- (void)setResultsAsObjectIDs:(char)a0;
- (void)setShallowInheritance:(char)a0;
- (char)shallowInheritance;

@end
