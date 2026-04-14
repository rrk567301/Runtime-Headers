@interface MAAutoAssetControlStatisticsBySize : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long patchedAssets;
@property (nonatomic) long long patchedBytes;
@property (nonatomic) long long fullAssets;
@property (nonatomic) long long fullBytes;

- (id)copy;
- (id)initWithInitialValue:(long long)a0;
- (id)description;
- (id)init;
- (id)summary;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
