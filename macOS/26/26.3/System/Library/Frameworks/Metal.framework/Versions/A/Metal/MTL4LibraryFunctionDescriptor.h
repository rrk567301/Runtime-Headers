@class NSString;
@protocol MTLLibrary;

@interface MTL4LibraryFunctionDescriptor : MTL4FunctionDescriptor

@property (copy) NSString *name;
@property (retain, nonatomic) id<MTLLibrary> library;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
