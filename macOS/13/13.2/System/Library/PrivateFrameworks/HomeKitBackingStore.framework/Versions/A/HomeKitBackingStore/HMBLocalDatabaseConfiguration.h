@class HMBModelContainer;

@interface HMBLocalDatabaseConfiguration : HMFObject <NSCopying>

@property (nonatomic) BOOL readOnly;
@property (retain, nonatomic) HMBModelContainer *modelContainer;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
