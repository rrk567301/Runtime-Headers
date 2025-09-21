@class NSString, NSArray, NSData, NSUUID, NSURL;
@protocol MPSGraphExecutableReflectionProxy, MTLDevice, MPSGraphExecutableProxy;

@interface _MTLMLLibrary : _MTLObjectWithLabel <MTLLibrarySPI> {
    id<MPSGraphExecutableProxy> _executables[3];
    NSURL *_mpsgraphPackageURL;
    id<MPSGraphExecutableReflectionProxy> _reflection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy) NSString *overrideTriple;
@property (nonatomic) BOOL shaderValidationEnabled;
@property (readonly) NSArray *externFunctionNames;
@property (readonly) NSData *bitcodeData;
@property (readonly, copy) NSUUID *libraryIdentifier;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) NSArray *functionNames;
@property (readonly) long long type;
@property (readonly) NSString *installName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)functionNames;
- (void)newIntersectionFunctionWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (id)newFunctionWithName:(id)a0;
- (void)newFunctionWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (id)newExternFunctionWithName:(id)a0;
- (id)newFunctionWithName:(id)a0 constantValues:(id)a1 error:(id *)a2;
- (void)dealloc;
- (id)newIntersectionFunctionWithDescriptor:(id)a0 error:(id *)a1;
- (id)newFunctionWithName:(id)a0 constantValues:(id)a1 functionCache:(id)a2 error:(id *)a3;
- (id)newFunctionWithName:(id)a0 constantValues:(id)a1 pipelineLibrary:(id)a2 error:(id *)a3;
- (id)reflectionForFunctionWithName:(id)a0;
- (void)newFunctionWithName:(id)a0 constantValues:(id)a1 completionHandler:(id /* block */)a2;
- (void)newFunctionWithName:(id)a0 constantValues:(id)a1 pipelineLibrary:(id)a2 completionHandler:(id /* block */)a3;
- (id)newFunctionWithDescriptor:(id)a0 destinationArchive:(id)a1 error:(id *)a2;
- (id)newFunctionWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)serializeToURL:(id)a0 error:(id *)a1;
- (unsigned long long)executableSize;
- (id)executableWithDeviceSelection:(long long)a0;
- (id)initWithDevice:(id)a0 executable:(id)a1 url:(id)a2 reflection:(id)a3;

@end
