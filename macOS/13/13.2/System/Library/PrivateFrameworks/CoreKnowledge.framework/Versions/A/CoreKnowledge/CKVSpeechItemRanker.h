@class NSMutableArray, NSObject;
@protocol CKVDatabaseReadOnlyAccess;

@interface CKVSpeechItemRanker : NSObject {
    NSMutableArray *_datasets;
}

@property (readonly, nonatomic) NSObject<CKVDatabaseReadOnlyAccess> *database;

+ (id)rankersForGroup:(id)a0 database:(id)a1 outOriginAppIds:(id *)a2 error:(id *)a3;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (BOOL)addDataset:(id)a0;
- (id)datasets;
- (BOOL)hasDatasets;
- (unsigned int)calculateItemLimit;
- (BOOL)enumerateRankedItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;

@end
