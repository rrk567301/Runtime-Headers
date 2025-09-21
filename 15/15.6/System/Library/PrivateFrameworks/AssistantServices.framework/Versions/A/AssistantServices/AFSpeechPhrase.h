@class NSArray;

@interface AFSpeechPhrase : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *interpretations;
@property (nonatomic) char isLowConfidence;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)allInterpretationStringsAndScores;
- (id)bestInterpretation;
- (id)firstInterpretation;
- (id)initWithInterpretations:(id)a0 isLowConfidence:(char)a1;

@end
