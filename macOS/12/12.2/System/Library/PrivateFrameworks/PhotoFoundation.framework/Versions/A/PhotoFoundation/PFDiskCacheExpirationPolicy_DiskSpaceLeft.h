@interface PFDiskCacheExpirationPolicy_DiskSpaceLeft : PFDiskCacheExpirationPolicy {
    long long _diskPercentageToLeaveFree;
}

+ (id)expirationPolicyWithPercentageOfDiskToLeaveFree:(long long)a0;

- (id)description;
- (long long)calculateOverage:(long long)a0 freeSpace:(long long)a1 volumeSizeInBytes:(long long)a2;
- (id)initWithPercentageToLeaveFree:(long long)a0;

@end
