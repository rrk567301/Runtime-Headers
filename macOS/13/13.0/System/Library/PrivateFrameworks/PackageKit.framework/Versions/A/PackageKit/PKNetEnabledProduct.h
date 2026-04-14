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
- (BOOL)commitReturningError:(id *)a0;
- (id)URL;
- (id)distribution;
- (BOOL)setDistribution:(id)a0;
- (id)productVersion;
- (id)productType;
- (id)productIdentifier;
- (id)localizedStringForKey:(id)a0 value:(id)a1;
- (id)allPackageReferences;
- (id)distributionContainer;
- (id)stringsDictionary;
- (id)initByLoadingProductAtURL:(id)a0 error:(id *)a1;
- (void)setProductIdentifier:(id)a0 version:(id)a1;
- (BOOL)setDistributionFromContainer:(id)a0;
- (BOOL)addResourceDataAtPath:(id)a0;
- (id)suggestedPackagePathFromPackageReference:(id)a0;
- (BOOL)registerPackageReference:(id)a0;
- (BOOL)unregisterPackageReference:(id)a0 deletePackage:(BOOL)a1;
- (BOOL)didReceiveData:(id)a0 fromDistributionURL:(id)a1 error:(id *)a2;
- (id)_distributionFlatData;
- (id)initForWritingAtPath:(id)a0 signingDelegate:(id)a1 error:(id *)a2;
- (id)_distributionWriteURLForLocalization:(id)a0;
- (BOOL)_populateWithFlattenedDistributionsReturningError:(id *)a0;
- (BOOL)commitProductInfo;

@end
