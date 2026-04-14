@class CKDAssetBatch, NSMutableDictionary;

@interface CKDTransactionState : NSObject

@property (retain, nonatomic) CKDAssetBatch *assetBatch;
@property (retain, nonatomic) NSMutableDictionary *itemsByAssetId;
@property (retain, nonatomic) NSMutableDictionary *itemsByAssetIdIgnoreRefSignature;

- (void).cxx_destruct;
- (id)init;

@end
