@class NSString;

@interface MTL4CommandAllocatorDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) NSString *label;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)dealloc;

@end
