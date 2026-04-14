@class ADConfidenceLevelRanges, NSMutableDictionary, NSDictionary, NSURL, ADModelBuilder, NSMutableArray;

@interface ADNetworkProvider : NSObject {
    NSMutableDictionary *_sizesForInput;
    NSMutableDictionary *_sizesForOutput;
    NSDictionary *_networkMetadata;
    ADModelBuilder *_modelBuilder;
    NSMutableArray *_knownConfigs;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, retain, nonatomic) ADConfidenceLevelRanges *confidenceLevelRanges;
@property (readonly, nonatomic) NSDictionary *layoutNamesDict;

+ (id)createRequestedLayoutsForDimensions:(id)a0;
+ (id)createRequestedLayoutsForDimensions:(id)a0 function:(id)a1;
+ (id)createRequestedLayoutsForDimensions:(id)a0 layout:(unsigned long long)a1 function:(id)a2;
+ (id)getAlternativePathForNetwork:(id)a0;
+ (BOOL)getAndVerifySizesFromConfig:(id)a0 inDictionary:(id)a1 forKey:(id)a2 sizes:(id)a3 layout:(unsigned long long *)a4;
+ (id)getConfigFolderForNetwork:(id)a0;
+ (id)getDefaultPathForNetwork:(id)a0 allowPrecompiledModel:(BOOL)a1;
+ (id)nonRunnableProviderForNetwork:(id)a0;
+ (id)nonRunnableProviderForNetwork:(id)a0 espressoEngine:(unsigned long long)a1;
+ (id)nonRunnableProviderForNetwork:(id)a0 requestedLayouts:(id)a1;
+ (id)providerForNetwork:(id)a0;
+ (id)providerForNetwork:(id)a0 espressoEngine:(unsigned long long)a1;
+ (id)providerForNetwork:(id)a0 requestedLayouts:(id)a1;
+ (id)providerForNetwork:(id)a0 requestedLayouts:(id)a1 espressoEngine:(unsigned long long)a2 makeRunnable:(BOOL)a3;
+ (id)providerForNetwork:(id)a0 requestedLayouts:(id)a1 makeRunnable:(BOOL)a2;
+ (id)supportedSizesForSizesDict:(id)a0 key:(id)a1 expectedPixelFormat:(unsigned int)a2;
+ (void)updateSizeForItem:(id)a0 fromShape:(id)a1 customStrides:(id)a2 forLayout:(unsigned long long)a3 target:(id)a4;

- (id)metadataForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)bufferExists:(id)a0 isInput:(BOOL)a1;
- (id)descriptorForBuffer:(id)a0 isInput:(BOOL)a1 pixelFormat:(unsigned int)a2;
- (id)generateLayoutNamesDictForFunction:(id)a0;
- (id)initWithNetwork:(id)a0 requestedLayouts:(id)a1 espressoEngine:(unsigned long long)a2 makeRunnable:(BOOL)a3;
- (id)layoutNamesDictForFunction:(id)a0;
- (BOOL)processConfig:(id)a0 inDictionary:(id)a1 forLayout:(unsigned long long)a2;
- (BOOL)readJsonMetadataFile:(id)a0 requestedLayouts:(id)a1;
- (id)supportedDimensionsForInput:(id)a0 expectedPixelFormat:(unsigned int)a1;
- (id)supportedSizesForInput:(id)a0 expectedPixelFormat:(unsigned int)a1;
- (id)supportedSizesForOutput:(id)a0 expectedPixelFormat:(unsigned int)a1;

@end
