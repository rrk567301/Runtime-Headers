@class NSArray;

@interface AFSpeechPhrase : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *interpretations;
@property (nonatomic) BOOL isLowConfidence;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)allInterpretationStringsAndScores;
- (id)bestInterpretation;
- (id)firstInterpretation;
- (id)initWithInterpretations:(id)a0 isLowConfidence:(BOOL)a1;

@end
