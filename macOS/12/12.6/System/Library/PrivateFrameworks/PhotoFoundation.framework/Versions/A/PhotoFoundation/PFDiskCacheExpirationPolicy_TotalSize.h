@interface PFDiskCacheExpirationPolicy_TotalSize : PFDiskCacheExpirationPolicy {
    long long _maxMegabytesToUse;
}

+ (id)expirationPolicyWithTotalSize:(long long)a0;

- (id)description;
- (long long)calculateOverage:(long long)a0 freeSpace:(long long)a1 volumeSizeInBytes:(long long)a2;
- (id)initWithMaxMegabytesToUse:(long long)a0;

@end
