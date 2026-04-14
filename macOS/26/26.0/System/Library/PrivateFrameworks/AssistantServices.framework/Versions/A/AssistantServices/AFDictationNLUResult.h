@class SIRINLUEXTERNALCDMNluResponse, AFVoiceCommandGrammarParsePackage;

@interface AFDictationNLUResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SIRINLUEXTERNALCDMNluResponse *nluResponse;
@property (retain, nonatomic) AFVoiceCommandGrammarParsePackage *commandGrammarParsePackage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
