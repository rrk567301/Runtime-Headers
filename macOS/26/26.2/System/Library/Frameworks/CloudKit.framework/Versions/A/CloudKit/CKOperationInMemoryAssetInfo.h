@class NSMutableData, NSMutableIndexSet;

@interface CKOperationInMemoryAssetInfo : NSObject

@property (retain, nonatomic) NSMutableData *assetContent;
@property (retain, nonatomic) NSMutableIndexSet *byteRanges;

- (void).cxx_destruct;
- (BOOL)isContiguous;
- (id)init;
- (id)assetContentWithExpectedSignature:(id)a0 verificationKey:(id)a1 error:(id *)a2;
- (void)writeData:(id)a0 atOffset:(unsigned long long)a1;

@end
