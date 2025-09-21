@interface AFVoiceCommandDebugInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasVoiceCommandInExhaustiveParses;
@property (nonatomic) BOOL hasVoiceCommandParses;
@property (nonatomic) BOOL hasVoiceCommandEditIntent;
@property (nonatomic) BOOL hasVoiceCommandAfterReranking;
@property (nonatomic) BOOL hasNoVoiceCommandAfterRespeakCheck;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithHasVoiceCommandInExhaustiveParses:(BOOL)a0 hasVoiceCommandParses:(BOOL)a1 hasVoiceCommandEditIntent:(BOOL)a2 hasVoiceCommandAfterReranking:(BOOL)a3 hasNoVoiceCommandAfterRespeakCheck:(BOOL)a4;

@end
