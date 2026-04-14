@interface PNAssetFetcherLimiter : NSObject <PNAssetFetcherLimiterWrapper> {
    void /* unknown type, empty encoding */ count;
}

@property (nonatomic, readonly) long long limitType;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long limit;

- (id)init;
- (id)initWithType:(long long)a0 limit:(long long)a1;

@end
