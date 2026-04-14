@interface MAAutoAssetProgress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long totalExpectedBytes;
@property (nonatomic) long long totalWrittenBytes;
@property (nonatomic) BOOL isStalled;
@property (nonatomic) double expectedTimeRemainingSecs;

- (id)newSummaryDictionary;
- (id)copy;
- (id)description;
- (id)init;
- (id)summary;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
