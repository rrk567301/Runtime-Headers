@class SIRINLUEXTERNALCDMNluResponse, AFVoiceCommandGrammarParsePackage;

@interface AFDictationNLUResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SIRINLUEXTERNALCDMNluResponse *nluResponse;
@property (retain, nonatomic) AFVoiceCommandGrammarParsePackage *commandGrammarParsePackage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
