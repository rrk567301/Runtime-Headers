@class NSString;

@interface _EARVoiceCommandDebugInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *precedingUtterance;
@property (readonly, nonatomic) NSString *commandUtterance;
@property (readonly, nonatomic) NSString *target;
@property (readonly, nonatomic) NSString *payload;
@property (readonly, nonatomic) char hasVoiceCommandInExhaustiveParses;
@property (readonly, nonatomic) char hasVoiceCommandParses;
@property (readonly, nonatomic) char hasVoiceCommandEditIntent;
@property (readonly, nonatomic) char hasVoiceCommandAfterReranking;
@property (readonly, nonatomic) char hasNoVoiceCommandAfterRespeakCheck;
@property (readonly, nonatomic) unsigned long long commandParserMachContinuousStartTicks;
@property (readonly, nonatomic) unsigned long long commandParserMachContinuousEndTicks;
@property (readonly, nonatomic) unsigned long long commandParserMachAbsoluteStartTicks;
@property (readonly, nonatomic) unsigned long long commandParserMachAbsoluteEndTicks;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPrecedingUtterance:(id)a0 commandUtterance:(id)a1 target:(id)a2 payload:(id)a3 hasVoiceCommandInExhaustiveParses:(char)a4 hasVoiceCommandParses:(char)a5 hasVoiceCommandEditIntent:(char)a6 hasVoiceCommandAfterReranking:(char)a7 hasNoVoiceCommandAfterRespeakCheck:(char)a8 commandParserMachContinuousStartTicks:(unsigned long long)a9 commandParserMachContinuousEndTicks:(unsigned long long)a10 commandParserMachAbsoluteStartTicks:(unsigned long long)a11 commandParserMachAbsoluteEndTicks:(unsigned long long)a12;

@end
