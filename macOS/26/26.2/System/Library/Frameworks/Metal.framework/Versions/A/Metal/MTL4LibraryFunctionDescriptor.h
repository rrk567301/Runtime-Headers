@class NSString;
@protocol MTLLibrary;

@interface MTL4LibraryFunctionDescriptor : MTL4FunctionDescriptor

@property (copy) NSString *name;
@property (retain, nonatomic) id<MTLLibrary> library;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)dealloc;

@end
