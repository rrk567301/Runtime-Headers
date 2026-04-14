@class NSString;

@interface MTL4CommandAllocatorDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) NSString *label;

- (unsigned long long)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
