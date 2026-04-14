@interface MANAutoAssetSetProgress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long downloadedAssetCount;
@property (nonatomic) long long remainingAssetCount;
@property (nonatomic) long long totalExpectedBytes;
@property (nonatomic) long long totalWrittenBytes;
@property (nonatomic) BOOL isStalled;
@property (nonatomic) double expectedTimeRemainingSecs;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copy;
- (id)init;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
