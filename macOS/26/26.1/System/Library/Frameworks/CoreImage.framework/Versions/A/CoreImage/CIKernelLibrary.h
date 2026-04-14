@class NSString, NSSet, NSURL, NSObject;
@protocol MTLLibrary, OS_dispatch_data;

@interface CIKernelLibrary : NSObject {
    NSObject<OS_dispatch_data> *_data;
    id<MTLLibrary> _library;
    NSSet *_extern_function_names;
    NSSet *_stitchable_function_names;
    BOOL _harvest_for_this_library;
}

@property (readonly) unsigned long long functionCount;
@property (readonly) unsigned long long digest;
@property (readonly) NSURL *url;
@property (readonly) NSString *mtl_source;

+ (void)clearCache;
+ (id)coreImageDylibWithDevice:(id)a0;
+ (id)internalBinaryArchiveWithName:(id)a0 device:(id)a1;
+ (id)cache;
+ (id)libraryWithURL:(id)a0 error:(id *)a1;
+ (id)cachedLibraryWithURL:(id)a0 error:(id *)a1;
+ (id)libraryWithSource:(id)a0 error:(id *)a1;
+ (id)internalLibraryWithName:(id)a0 device:(id)a1;
+ (id)libraryWithData:(id)a0 error:(id *)a1;

- (id)functionWithName:(id)a0;
- (void)initFunctionNames;
- (id)functionNames;
- (id)newSpecializedFunctionWithDescriptor:(id)a0;
- (id)initWithSource:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)newSpecializedFunctionWithName:(id)a0 constants:(void *)a1;
- (id)refelectionWithFunctionName:(id)a0;
- (id)newFunctionWithName:(id)a0;

@end
