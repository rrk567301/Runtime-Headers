@class NSString;

@interface TRIWKMSCachedKeyEntry : NSObject

@property (copy, nonatomic) NSString *unwrappedKey;
@property (nonatomic) unsigned long long cacheTimeNanos;
@property (nonatomic) unsigned long long expiryTimeNanos;
@property (nonatomic) unsigned long long accessCount;

- (void).cxx_destruct;

@end
