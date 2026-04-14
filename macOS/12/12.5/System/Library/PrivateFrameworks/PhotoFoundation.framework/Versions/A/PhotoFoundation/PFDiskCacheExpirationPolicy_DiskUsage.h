@interface PFDiskCacheExpirationPolicy_DiskUsage : PFDiskCacheExpirationPolicy {
    double _maxDiskPercentageToUse;
}

+ (id)expirationPolicyWithPercentageOfDiskToUse:(double)a0;

- (id)description;
- (long long)calculateOverage:(long long)a0 freeSpace:(long long)a1 volumeSizeInBytes:(long long)a2;
- (id)initWithMaxDiskPercentageToUse:(double)a0;

@end
