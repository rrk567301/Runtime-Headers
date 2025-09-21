@class HMBModelContainer;
@protocol HMBLocalZoneDelegate;

@interface HMBMutableLocalZoneConfiguration : HMBLocalZoneConfiguration

@property (nonatomic) char readOnly;
@property (nonatomic) char createIfNeeded;
@property (retain, nonatomic) HMBModelContainer *modelContainer;
@property (weak, nonatomic) id<HMBLocalZoneDelegate> delegate;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
