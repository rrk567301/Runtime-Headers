@class SUMetadataCache, NSString, NSURL, NSData, NSDate, NSError, NSDictionary, SUProduct;

@interface SUProductLoadOperation : NSOperation {
    NSString *_productKey;
    NSURL *_distributionURL;
    NSData *_distributionData;
    NSDate *_postDate;
    SUProduct *_product;
    NSError *_error;
}

@property (retain) NSDictionary *extraInfo;
@property char shouldBuildCacheOnly;
@property (retain) SUMetadataCache *metadataCache;
@property (retain) NSDictionary *distributionEnv;
@property (retain) NSDictionary *distributionEvaluationMetainfo;
@property (retain) NSURL *sourceCatalogURL;
@property char checkForMacBuddyInstallableTag;

- (void)dealloc;
- (id)description;
- (id)error;
- (id)product;
- (char)_isValidChoice:(id)a0;
- (void)applyIntegrityInformation:(id)a0;
- (char)applyPKMDataByPackageURL:(id)a0;
- (char)evaluateProductForPredicateScan:(char)a0;
- (char)evaluateProductReturningEvalMessages:(id *)a0 predicateScan:(char)a1 evaluateOnly:(char)a2;
- (id)initWithProductKey:(id)a0 distributionURL:(id)a1 distributionData:(id)a2 postDate:(id)a3;

@end
