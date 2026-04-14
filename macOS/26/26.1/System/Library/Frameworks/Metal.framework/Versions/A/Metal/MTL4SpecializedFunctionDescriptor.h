@class MTL4FunctionDescriptor, NSString, MTLFunctionConstantValues;

@interface MTL4SpecializedFunctionDescriptor : MTL4FunctionDescriptor

@property (copy, nonatomic) MTL4FunctionDescriptor *functionDescriptor;
@property (copy) NSString *specializedName;
@property (copy, nonatomic) MTLFunctionConstantValues *constantValues;

- (unsigned long long)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
