@interface PFDiskCacheExpirationPolicy : NSObject

- (id)init;
- (long long)calculateOverage:(long long)a0 freeSpace:(long long)a1 volumeSizeInBytes:(long long)a2;

@end
