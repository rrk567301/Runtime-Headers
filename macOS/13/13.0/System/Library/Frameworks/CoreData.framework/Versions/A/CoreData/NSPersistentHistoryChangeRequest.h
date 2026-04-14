@class NSArray, NSPersistentHistoryToken, NSFetchRequest, NSNumber;

@interface NSPersistentHistoryChangeRequest : NSPersistentStoreRequest {
    NSArray *_transactionIDs;
    NSNumber *_transactionNumber;
    struct __persistentHistoryChangeRequestDescriptionFlags { unsigned char _useQueryGenerationToken : 1; unsigned char _deleteHistoryRequest : 1; unsigned char _fetchTransactionForToken : 1; unsigned char _percentageDeleteHistoryRequest : 1; unsigned int _reservedPersistentHistoryChangeRequestDescription : 28; } _persistentHistoryChangeRequestDescriptionFlags;
    id *_additionalPrivateIvars;
    unsigned long long _percentageOfDB;
}

@property long long resultType;
@property (readonly) NSPersistentHistoryToken *token;
@property (retain, nonatomic) NSFetchRequest *fetchRequest;

+ (id)fetchHistoryAfterDate:(id)a0;
+ (id)fetchHistoryAfterToken:(id)a0;
+ (id)fetchHistoryAfterTransaction:(id)a0;
+ (id)fetchHistoryTransactionForToken:(id)a0;
+ (id)fetchHistoryWithFetchRequest:(id)a0;
+ (id)deleteHistoryBeforeDate:(id)a0;
+ (id)deleteHistoryBeforeToken:(id)a0;
+ (id)deleteHistoryBeforeTransaction:(id)a0;
+ (id)deleteHistoryBeforeDate:(id)a0 whenHistoryPercentageOfStoreIsGreaterThan:(unsigned long long)a1;
+ (id)deleteHistoryBeforeToken:(id)a0 whenHistoryPercentageOfStoreIsGreaterThan:(unsigned long long)a1;
+ (id)_stringForHistoryRequestResultType:(long long)a0;
+ (id)decodeFromXPCArchive:(id)a0 withContext:(id)a1 withPolicy:(id)a2;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)date;
- (id)initWithDate:(id)a0;
- (id)predicate;
- (void)setFetchLimit:(unsigned long long)a0;
- (unsigned long long)fetchLimit;
- (unsigned long long)fetchOffset;
- (id)initWithFetchRequest:(id)a0;
- (void)setFetchBatchSize:(unsigned long long)a0;
- (void)setFetchOffset:(unsigned long long)a0;
- (id)propertiesToFetch;
- (BOOL)includesSubentities;
- (unsigned long long)fetchBatchSize;
- (unsigned long long)requestType;
- (id)initWithDate:(id)a0 delete:(BOOL)a1;
- (id)initWithDate:(id)a0 delete:(BOOL)a1 percentageOfDB:(unsigned long long)a2;
- (id)initWithTransactionIDs:(id)a0;
- (id)initWithTransactionID:(id)a0 delete:(BOOL)a1 transactionOnly:(BOOL)a2 percentageOfDB:(unsigned long long)a3;
- (id)initWithToken:(id)a0;
- (id)initWithToken:(id)a0 delete:(BOOL)a1;
- (id)initWithToken:(id)a0 delete:(BOOL)a1 percentageOfDB:(unsigned long long)a2;
- (id)initWithTransactionToken:(id)a0;
- (id)transactionNumber;
- (id)transactionIDs;
- (id)propertiesToFetchForEntity:(id)a0;
- (id)propertiesToFetchForEntity:(id)a0 includeTransactionStrings:(BOOL)a1;
- (id)entityNameToFetch;
- (BOOL)isFetchTransactionForToken;
- (BOOL)isDelete;
- (BOOL)isPercentageDelete;
- (unsigned long long)percentageOfDB;
- (BOOL)useQueryGenerationToken;
- (void)setUseQueryGenerationToken:(BOOL)a0;
- (id)predicateForStoreIdentifier:(id)a0;
- (id)encodeForXPC;

@end
