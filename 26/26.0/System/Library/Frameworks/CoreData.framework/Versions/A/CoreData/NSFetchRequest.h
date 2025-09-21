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

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL purgeableResult;
@property (retain, nonatomic) NSEntityDescription *entity;
@property (readonly, nonatomic) NSString *entityName;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) unsigned long long fetchLimit;
@property (retain, nonatomic) NSArray *affectedStores;
@property (nonatomic) unsigned long long resultType;
@property (nonatomic) BOOL includesSubentities;
@property (nonatomic) BOOL includesPropertyValues;
@property (nonatomic) BOOL returnsObjectsAsFaults;
@property (copy, nonatomic) NSArray *relationshipKeyPathsForPrefetching;
@property (nonatomic) BOOL includesPendingChanges;
@property (nonatomic) BOOL returnsDistinctResults;
@property (copy, nonatomic) NSArray *propertiesToFetch;
@property (nonatomic) unsigned long long fetchOffset;
@property (nonatomic) unsigned long long fetchBatchSize;
@property (nonatomic) BOOL shouldRefreshRefetchedObjects;
@property (copy, nonatomic) NSArray *propertiesToGroupBy;
@property (retain, nonatomic) NSPredicate *havingPredicate;

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)decodeFromXPCArchive:(id)a0 withContext:(id)a1 andPolicy:(id)a2;
+ (void)initialize;
+ (id)fetchRequestWithEntityName:(id)a0;
+ (id)_newDenormalizedFetchProperties:(id)a0;
+ (id)_stringForFetchRequestResultType:(unsigned long long)a0;

- (void)setAllocationSize:(unsigned long long)a0;
- (BOOL)resultsAsObjectIDs;
- (id)_asyncResultHandle;
- (BOOL)_isAsyncRequest;
- (BOOL)_isEditable;
- (void)setShallowInheritance:(BOOL)a0;
- (void)_setFlagsFromXPCEncoding:(id)a0;
- (id)prefetchRelationshipKeys;
- (unsigned long long)_fetchBatchLRUEntriesLimit;
- (void)setPrepopulateObjects:(BOOL)a0;
- (void)_setDisablePersistentStoreResultCaching:(BOOL)a0;
- (id)_copyForDirtyContext;
- (unsigned long long)allocationType;
- (BOOL)_disablePersistentStoreResultCaching;
- (BOOL)includeRowData;
- (void)setResultsAsObjectIDs:(BOOL)a0;
- (BOOL)_isCachingFetchRequest;
- (id)_XPCEncodedFlags;
- (void)setAllocationType:(unsigned long long)a0;
- (BOOL)excludesPendingChanges;
- (void)setIncludeRowData:(BOOL)a0;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 uniquedMappings:(id)a5 entities:(id)a6;
- (id)encodeForXPC;
- (id)initWithEntityName:(id)a0;
- (void)_setAsyncResultHandle:(id)a0;
- (id)execute:(id *)a0;
- (unsigned long long)_encodedFetchRequestFlagsForFlags:(unsigned long long)a0;
- (BOOL)shallowInheritance;
- (void)_setFetchBatchLRUEntriesLimit:(unsigned long long)a0;
- (void)_throwIfNotEditable;
- (void)_incrementInUseCounter;
- (void)setExcludesPendingChanges:(BOOL)a0;
- (void)_resolveEntityWithContext:(id)a0;
- (BOOL)prepopulateObjects;
- (void)setPrefetchRelationshipKeys:(id)a0;
- (unsigned long long)requestType;
- (void)allowEvaluation;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)allocationSize;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
