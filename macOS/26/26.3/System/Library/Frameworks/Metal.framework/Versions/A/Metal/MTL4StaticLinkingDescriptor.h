@class NSArray, NSDictionary;

@interface MTL4StaticLinkingDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *functionDescriptors;
@property (copy, nonatomic) NSArray *privateFunctionDescriptors;
@property (copy, nonatomic) NSDictionary *groups;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
