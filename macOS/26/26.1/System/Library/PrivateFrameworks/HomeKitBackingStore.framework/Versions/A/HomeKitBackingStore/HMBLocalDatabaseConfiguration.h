@class HMBModelContainer;

@interface HMBLocalDatabaseConfiguration : HMFObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) HMBModelContainer *modelContainer;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
