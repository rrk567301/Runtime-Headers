@interface MAAutoAssetProgress : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long totalExpectedBytes;
@property (nonatomic) long long totalWrittenBytes;
@property (nonatomic) char isStalled;
@property (nonatomic) double expectedTimeRemainingSecs;

- (id)copy;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)newSummaryDictionary;

@end
