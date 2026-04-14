@class MAAutoAssetSelector;

@interface MADAutoAssetScheduledJob : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) MAAutoAssetSelector *assetSelector;
@property (nonatomic) long long intervalSecs;
@property (nonatomic) long long remainingSecs;
@property (nonatomic) BOOL pushedJob;

- (id)copy;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (id)initForAssetSelector:(id)a0 withActivityInterval:(long long)a1 forPushedJob:(BOOL)a2;

@end
