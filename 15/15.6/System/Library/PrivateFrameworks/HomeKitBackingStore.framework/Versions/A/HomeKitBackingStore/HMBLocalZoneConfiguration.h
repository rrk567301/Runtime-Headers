@class HMBModelContainer;
@protocol HMBLocalZoneDelegate;

@interface HMBLocalZoneConfiguration : HMFObject <NSCopying, NSMutableCopying>

@property (nonatomic) char readOnly;
@property (nonatomic) char createIfNeeded;
@property (retain, nonatomic) HMBModelContainer *modelContainer;
@property (weak, nonatomic) id<HMBLocalZoneDelegate> delegate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
