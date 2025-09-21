@class NSString, NSArray, KHDBQuery, NSSet, KHDBPreparedSql, KHDBKCanceler, KHDBBucket, KHDBRidList, NSMutableArray;

@interface KHDBIterator : NSObject {
    KHDBRidList *_nextBatchIdList;
    unsigned long long _ridArrayIndex;
    unsigned long long _batchIndex;
    NSArray *_batch;
    KHDBBucket *_bucket;
    NSMutableArray *_fieldDefs;
    char _includeModelIdInResult;
    KHDBPreparedSql *_sqlToUse;
    char _selectAllRows;
}

@property (readonly, retain, nonatomic) KHDBQuery *query;
@property (nonatomic) unsigned long long batchSize;
@property (retain, nonatomic) KHDBKCanceler *canceler;
@property (readonly, retain, nonatomic) NSString *where;
@property (readonly, retain, nonatomic) NSArray *queryArgs;
@property (readonly, retain, nonatomic) KHDBRidList *modelIds;
@property (retain, nonatomic) NSSet *prefetchRelationships;
@property (retain, nonatomic) NSArray *returnColumns;
@property (nonatomic) char returnDictionary;

- (void)dealloc;
- (id)description;
- (unsigned long long)count;
- (void)reset;
- (id)next;
- (id)initWithQuery:(id)a0;
- (void)setWhere:(id)a0;
- (void)iterateWithBlock:(id /* block */)a0;
- (char)nextDictionary:(id)a0;
- (void)requery;
- (id)_prepareForQueryOfColumns:(id)a0 where:(id)a1;
- (void)fillBucketForColumns:(id)a0 fromQuery:(id)a1 modelIdCheckList:(id)a2;
- (id)initWithEntity:(id)a0 modelIds:(id)a1;
- (id)initWithEntity:(id)a0 returning:(id)a1 where:(id)a2 args:(id)a3;
- (id)initWithEntity:(id)a0 where:(id)a1;
- (id)initWithEntity:(id)a0 where:(id)a1 args:(id)a2;
- (id)initWithQuery:(id)a0 returning:(id)a1;
- (void)loadNextBatch;
- (char)nextArray:(id)a0;
- (void)queryArgs:(id)a0;
- (id)selectSomeObjects:(id)a0 modelIdCheckList:(id)a1 fromQuery:(id)a2;
- (id)selectSomeObjectsAsDictionaries:(id)a0 modelIdCheckList:(id)a1 fromQuery:(id)a2;

@end
