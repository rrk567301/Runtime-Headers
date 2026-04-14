@class NSArray, AFSpeechInterpretation;

@interface AFSpeechUtterance : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *interpretationIndices;
@property (nonatomic) long long confidenceScore;
@property (nonatomic) long long source;
@property (readonly, copy, nonatomic) AFSpeechInterpretation *interpretation;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInterpretationIndices:(id)a0 confidenceScore:(long long)a1;
- (id)initWithInterpretationIndices:(id)a0 confidenceScore:(long long)a1 interpretation:(id)a2;

@end
