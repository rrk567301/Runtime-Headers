@class NSURL;

@interface SerializedDiskImageGraph : DiskImageGraph

@property (readonly, nonatomic) NSURL *pstackURL;

+ (id)getRelativeIfContainedWithChildURL:(id)a0 parentURL:(id)a1;

- (void).cxx_destruct;
- (id)URLRelativeToPstackParentWithURL:(id)a0;
- (id)cloneToURL:(id)a0 error:(id *)a1;
- (id)initWithBaseImageURL:(id)a0 pstackURL:(id)a1 tag:(id)a2 error:(id *)a3;
- (id)initWithGraphDB:(id)a0 pstackURL:(id)a1 error:(id *)a2;
- (id)initWithPluginName:(id)a0 pluginParams:(id)a1 pstackURL:(id)a2 tag:(id)a3 error:(id *)a4;
- (id)initWithPstackURL:(id)a0 error:(id *)a1;
- (BOOL)savePstackWithError:(id *)a0;

@end
