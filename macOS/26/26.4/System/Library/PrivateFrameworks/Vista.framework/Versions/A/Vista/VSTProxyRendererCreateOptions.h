@class NSString;

@interface VSTProxyRendererCreateOptions : NSObject

@property (nonatomic) long long packingMethod;
@property (nonatomic) unsigned long long numBatches;
@property (nonatomic) BOOL createIOSurfaceBackedResources;
@property (nonatomic) BOOL reduceTileRenderingRegion;
@property (nonatomic) BOOL useVertexAmplification;
@property (nonatomic) BOOL useEarlyZTesting;
@property (nonatomic) BOOL useOverdrawLimit;
@property (nonatomic) BOOL recordMaxVisibilityContribution;
@property (retain, nonatomic) NSString *dumpPath;
@property (nonatomic) unsigned long long maxNumDumpedFrames;
@property (nonatomic) BOOL renderBack;
@property (nonatomic) BOOL generateProxyMesh;

- (void).cxx_destruct;
- (id)init;

@end
