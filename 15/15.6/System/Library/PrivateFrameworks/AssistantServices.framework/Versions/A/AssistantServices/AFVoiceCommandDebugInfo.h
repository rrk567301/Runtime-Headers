@interface AFVoiceCommandDebugInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char hasVoiceCommandInExhaustiveParses;
@property (nonatomic) char hasVoiceCommandParses;
@property (nonatomic) char hasVoiceCommandEditIntent;
@property (nonatomic) char hasVoiceCommandAfterReranking;
@property (nonatomic) char hasNoVoiceCommandAfterRespeakCheck;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithHasVoiceCommandInExhaustiveParses:(char)a0 hasVoiceCommandParses:(char)a1 hasVoiceCommandEditIntent:(char)a2 hasVoiceCommandAfterReranking:(char)a3 hasNoVoiceCommandAfterRespeakCheck:(char)a4;

@end
