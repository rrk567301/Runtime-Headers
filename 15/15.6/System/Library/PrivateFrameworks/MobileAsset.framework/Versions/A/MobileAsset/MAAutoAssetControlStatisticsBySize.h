@interface MAAutoAssetControlStatisticsBySize : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long patchedAssets;
@property (nonatomic) long long patchedBytes;
@property (nonatomic) long long fullAssets;
@property (nonatomic) long long fullBytes;

- (id)copy;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initWithInitialValue:(long long)a0;

@end
