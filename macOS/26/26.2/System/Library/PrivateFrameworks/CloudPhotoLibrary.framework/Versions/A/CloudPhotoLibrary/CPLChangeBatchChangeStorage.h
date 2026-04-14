@class CPLChangeBatch, NSDictionary, NSString;

@interface CPLChangeBatchChangeStorage : CPLChangeStorage {
    NSDictionary *_changesPerScopedIdentifier;
    NSString *_storageDescription;
}

@property (readonly, nonatomic) CPLChangeBatch *batch;

- (id)changeWithScopedIdentifier:(id)a0;
- (id)changesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (void).cxx_destruct;
- (id)storageDescription;
- (id)initWithBatch:(id)a0 name:(id)a1;

@end
