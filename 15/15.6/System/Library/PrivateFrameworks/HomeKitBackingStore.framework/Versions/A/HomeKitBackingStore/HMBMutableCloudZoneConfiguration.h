@interface HMBMutableCloudZoneConfiguration : HMBCloudZoneConfiguration <NSCopying, NSMutableCopying>

@property char shouldRebuildOnManateeKeyLoss;
@property char shouldSkipCloudPulls;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
