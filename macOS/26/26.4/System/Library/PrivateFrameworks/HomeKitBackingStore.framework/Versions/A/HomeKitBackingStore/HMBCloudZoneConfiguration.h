@interface HMBCloudZoneConfiguration : HMFObject <NSCopying, NSMutableCopying>

@property BOOL shouldRebuildOnManateeKeyLoss;
@property BOOL shouldSkipCloudPulls;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (unsigned long long)hash;

@end
