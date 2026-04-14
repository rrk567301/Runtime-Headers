@class NSArray;

@interface AFSpeechUtterance : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *interpretationIndices;
@property (nonatomic) long long confidenceScore;
@property (nonatomic) long long source;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithInterpretationIndices:(id)a0 confidenceScore:(long long)a1;

@end
