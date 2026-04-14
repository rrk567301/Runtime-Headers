@class NSString, NSMutableDictionary, NSArray, NSUUID, NSData;
@protocol MTLDevice;

@interface _MTLLibrary : _MTLObjectWithLabel <MTLLibrarySPI>

@property (readonly, retain, nonatomic) NSMutableDictionary *functionDictionary;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly, retain) NSArray *functionNames;
@property (readonly, retain) NSArray *externFunctionNames;
@property (readonly) void *libraryData;
@property (readonly) struct MTLLibraryContainer { struct MTLPipelineCollection *x0; _Atomic int x1; struct { unsigned char x0[32]; } x2; struct MTLLibraryData *x3; id x4; id x5; id x6; id x7; id x8; } *cacheEntry;
@property (copy) NSString *overrideTriple;
@property (nonatomic) BOOL shaderValidationEnabled;
@property (readonly, copy) NSUUID *libraryIdentifier;
@property (readonly) NSArray *variableList;
@property (readonly) BOOL isStub;
@property (readonly, retain) NSArray *specializedFunctionHashes;
@property (readonly, retain) NSArray *stitchingFunctionHashes;
@property (readonly, retain) NSArray *functionHashes;
@property (readonly) NSData *bitcodeData;
@property (readonly) long long type;
@property (readonly) NSString *installName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)functionNames;
- (id)newIntersectionFunctionWithDescriptor:(id)a0 error:(id *)a1;
- (id)formattedDescription:(unsigned long long)a0;
- (id)bitCodeWithHash:(const struct { unsigned char x0[32]; } *)a0;
- (id)initWithLibraryContainer:(struct MTLLibraryContainer { struct MTLPipelineCollection *x0; _Atomic int x1; struct { unsigned char x0[32]; } x2; struct MTLLibraryData *x3; id x4; id x5; id x6; id x7; id x8; } *)a0 device:(id)a1;
- (id)overrideTriple;
- (void)newFunctionWithName:(id)a0 constantValues:(id)a1 functionCache:(id)a2 specializedName:(id)a3 completionHandler:(id /* block */)a4;
- (id)newStitchedFunctionWithHash:(const struct { unsigned char x0[32]; } *)a0;
- (void)newFunctionWithName:(id)a0 constantValues:(id)a1 pipelineLibrary:(id)a2 completionHandler:(id /* block */)a3;
- (id)specializedFunctionHashes;
- (id)externFunctionNames;
- (id)reflectionForFunctionWithName:(id)a0;
- (id)newFunctionWithNameInternal:(id)a0;
- (id)newFunctionWithName:(id)a0 constantValues:(id)a1 functionCache:(id)a2 specializedName:(id)a3 error:(id *)a4;
- (id)libraryIdentifier;
- (id)newFunctionWithHash:(const struct { unsigned char x0[32]; } *)a0;
- (id)newFunctionWithName:(id)a0 constantValues:(id)a1 functionCache:(id)a2 error:(id *)a3;
- (id)bitcodeData;
- (id)newFunctionWithDescriptor:(id)a0 error:(id *)a1;
- (id)newFunctionWithName:(id)a0;
- (void)newFunctionWithDescriptor:(id)a0 destinationArchive:(id)a1 functionCache:(id)a2 completionHandler:(id /* block */)a3;
- (id)libraryDataContents;
- (id)newFunctionWithName:(id)a0 constantValues:(id)a1 pipelineLibrary:(id)a2 error:(id *)a3;
- (long long)type;
- (id)newSpecializedFunctionWithHash:(const struct { unsigned char x0[32]; } *)a0 libraryPath:(id)a1;
- (void)newFunctionWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (id)newSpecializedFunctionWithDescriptorInternal:(id)a0 destinationArchive:(id)a1 functionCache:(id)a2 error:(id *)a3;
- (void)newFunctionWithName:(id)a0 constantValues:(id)a1 completionHandler:(id /* block */)a2;
- (id)newFunctionWithName:(id)a0 constantValues:(id)a1 error:(id *)a2;
- (void)setOverrideTriple:(id)a0;
- (void)newIntersectionFunctionWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (id)stitchingFunctionHashes;
- (id)newSpecializedFunctionWithHash:(const struct { unsigned char x0[32]; } *)a0;
- (BOOL)getFunctionAliasAndNameForHash:(const struct { unsigned char x0[32]; } *)a0 functionName:(id *)a1 alias:(id *)a2;
- (id)newFunctionWithDescriptor:(id)a0 destinationArchive:(id)a1 error:(id *)a2;
- (id)newExternFunctionWithName:(id)a0;
- (void)dealloc;
- (BOOL)serializeToURL:(id)a0 error:(id *)a1;
- (id)newMetalScript;

@end
