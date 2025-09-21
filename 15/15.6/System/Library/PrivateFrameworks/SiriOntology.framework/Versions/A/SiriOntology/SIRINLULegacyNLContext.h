@class NSString, NSArray;

@interface SIRINLULegacyNLContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property char dictationPrompt;
@property char strictPrompt;
@property (retain, nonatomic) NSString *previousDomainName;
@property char listenAfterSpeaking;
@property (retain, nonatomic) NSArray *renderedTexts;
@property char fromPommes;
@property (nonatomic) int legacyContextSource;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictationPrompt:(char)a0 strictPrompt:(char)a1 previousDomainName:(id)a2 listenAfterSpeaking:(char)a3;
- (id)initWithDictationPrompt:(char)a0 strictPrompt:(char)a1 previousDomainName:(id)a2 listenAfterSpeaking:(char)a3 renderedTexts:(id)a4;
- (id)initWithDictationPrompt:(char)a0 strictPrompt:(char)a1 previousDomainName:(id)a2 listenAfterSpeaking:(char)a3 renderedTexts:(id)a4 legacyContextSource:(int)a5;

@end
