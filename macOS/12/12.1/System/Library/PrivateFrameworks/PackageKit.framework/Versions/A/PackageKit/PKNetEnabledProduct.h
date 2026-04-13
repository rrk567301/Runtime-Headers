@class PKDistributionContainer, NSString, NSURL, NSData, PKProductInfo, PKDistribution;
@protocol PKMutableProductSigningDelegate;

@interface PKNetEnabledProduct : PKMutableProduct {
    NSURL *_url;
    PKProductInfo *_productInfo;
    NSData *_distributionData;
    PKDistributionContainer *_container;
    PKDistribution *_fromDistribution;
    PKDistributionContainer *_fromContainer;
    NSString *_resourcePath;
    id<PKMutableProductSigningDelegate> _signingDelegate;
}

+ (id)productInfoFilename;
+ (id)_standardizedProductURL:(id)a0;

- (void)dealloc;
- (id)description;
- (id)URL;
- (BOOL)commitReturningError:(id *)a0;
- (BOOL)setDistribution:(id)a0;
- (id)distribution;
- (id)productVersion;
- (id)productType;
- (id)productIdentifier;
- (id)localizedStringForKey:(id)a0 value:(id)a1;
- (id)allPackageReferences;
- (id)stringsDictionary;
- (id)distributionContainer;
- (id)initByLoadingProductAtURL:(id)a0 error:(id *)a1;
- (BOOL)setDistributionFromContainer:(id)a0;
- (void)setProductIdentifier:(id)a0 version:(id)a1;
- (BOOL)addResourceDataAtPath:(id)a0;
- (id)suggestedPackagePathFromPackageReference:(id)a0;
- (BOOL)registerPackageReference:(id)a0;
- (BOOL)unregisterPackageReference:(id)a0 deletePackage:(BOOL)a1;
- (BOOL)didReceiveData:(id)a0 fromDistributionURL:(id)a1 error:(id *)a2;
- (id)_distributionWriteURLForLocalization:(id)a0;
- (BOOL)commitProductInfo;
- (BOOL)_populateWithFlattenedDistributionsReturningError:(id *)a0;
- (id)_distributionFlatData;
- (id)initForWritingAtPath:(id)a0 signingDelegate:(id)a1 error:(id *)a2;
- (BOOL)_setDistributionFlatData:(id)a0;

@end
