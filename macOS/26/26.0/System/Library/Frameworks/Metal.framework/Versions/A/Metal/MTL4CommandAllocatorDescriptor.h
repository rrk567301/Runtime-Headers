@class NSString;

@interface MTL4CommandAllocatorDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) NSString *label;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
