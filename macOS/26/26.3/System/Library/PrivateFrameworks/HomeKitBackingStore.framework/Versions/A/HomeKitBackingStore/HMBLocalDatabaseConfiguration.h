@class HMBModelContainer;

@interface HMBLocalDatabaseConfiguration : HMFObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) HMBModelContainer *modelContainer;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
