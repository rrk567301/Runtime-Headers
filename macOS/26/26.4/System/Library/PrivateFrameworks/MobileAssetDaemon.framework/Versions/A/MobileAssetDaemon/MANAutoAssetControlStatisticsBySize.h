@interface MANAutoAssetControlStatisticsBySize : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long patchedAssets;
@property (nonatomic) long long patchedBytes;
@property (nonatomic) long long fullAssets;
@property (nonatomic) long long fullBytes;

- (id)initWithInitialValue:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)init;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
