@class DDGrammar, NSDictionary;

@interface DDCompilerState : NSObject <NSSecureCoding> {
    struct __CFArray { } *_states;
    struct __DDDotedProduction **_dotedProduction;
    long long _numberOfDotedProduction;
    struct __DDProtoLexemeCollection { } *_plCollection;
    NSDictionary *_ExternalTerminalToInternalTerminal;
    NSDictionary *_InternalTerminalToTerminalExternal;
    NSDictionary *_ExternalNonTerminalToInternalNonTerminal;
    NSDictionary *_InternalNonTerminalToTerminalNonExternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) DDGrammar *grammar;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGrammar:(id)a0 states:(struct __CFArray { } *)a1 dotedProduction:(struct __DDDotedProduction **)a2 numberOfDotedProduction:(long long)a3;
- (void)setPlCollection:(struct __DDProtoLexemeCollection { } *)a0;
- (struct __CFString { } *)copyItemSetDescriptionForStateWithIndex:(long long)a0;
- (id)copyItemSetForStateIndex:(long long)a0;
- (long long)_resolveInternalTerminalID:(long long)a0;
- (long long)_resolveInternalNonTerminalID:(long long)a0;
- (struct __CFString { } *)_copyDescriptionOfInternalToken:(long long)a0;

@end
