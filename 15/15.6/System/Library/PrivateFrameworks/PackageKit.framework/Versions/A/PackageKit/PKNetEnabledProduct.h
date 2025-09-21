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

+ (id)_standardizedProductURL:(id)a0;
+ (id)productInfoFilename;

- (void)dealloc;
- (id)description;
- (id)URL;
- (char)commitReturningError:(id *)a0;
- (id)distribution;
- (char)setDistribution:(id)a0;
- (id)productVersion;
- (id)productType;
- (id)productIdentifier;
- (id)allPackageReferences;
- (id)localizedStringForKey:(id)a0 value:(id)a1;
- (id)_distributionFlatData;
- (id)_distributionWriteURLForLocalization:(id)a0;
- (char)_populateWithFlattenedDistributionsReturningError:(id *)a0;
- (char)addResourceDataAtPath:(id)a0;
- (char)commitProductInfo;
- (char)didReceiveData:(id)a0 fromDistributionURL:(id)a1 error:(id *)a2;
- (id)distributionContainer;
- (id)initByLoadingProductAtURL:(id)a0 error:(id *)a1;
- (id)initForWritingAtPath:(id)a0 signingDelegate:(id)a1 error:(id *)a2;
- (char)registerPackageReference:(id)a0;
- (char)setDistributionFromContainer:(id)a0;
- (void)setProductIdentifier:(id)a0 version:(id)a1;
- (id)stringsDictionary;
- (id)suggestedPackagePathFromPackageReference:(id)a0;
- (char)unregisterPackageReference:(id)a0 deletePackage:(char)a1;

@end
