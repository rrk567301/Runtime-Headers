@class SIRINLUEXTERNALCDMNluResponse, AFVoiceCommandGrammarParsePackage;

@interface AFDictationNLUResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SIRINLUEXTERNALCDMNluResponse *nluResponse;
@property (retain, nonatomic) AFVoiceCommandGrammarParsePackage *commandGrammarParsePackage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
