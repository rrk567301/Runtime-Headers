@class NSArray;

@interface AFSpeechInterpretation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *tokens;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)text;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)confidenceScore;
- (long long)averageConfidenceScore;
- (long long)confidenceScoreAvg;
- (long long)confidenceScoreMax;
- (long long)confidenceScoreMin;

@end
