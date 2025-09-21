@class AFVoiceCommandGrammarParsePackage, AFVoiceCommandDebugInfo;

@interface AFSpeechInfoPackage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) AFVoiceCommandGrammarParsePackage *commandGrammarParsePackage;
@property (readonly, copy, nonatomic) AFVoiceCommandDebugInfo *debugInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCommandGrammarParsePackage:(id)a0;
- (id)initWithCommandGrammarParsePackage:(id)a0 debugInfo:(id)a1;

@end
