@class NSArray;

@interface AFSpeechInterpretation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *tokens;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)text;
- (long long)confidenceScore;
- (long long)confidenceScoreMax;
- (long long)confidenceScoreMin;
- (long long)confidenceScoreAvg;
- (long long)averageConfidenceScore;

@end
