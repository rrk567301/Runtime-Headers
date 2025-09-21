@class NSUUID, NSString, NSDictionary;

@interface AFVoiceCommandGrammarParseCandidate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *voiceCommandUUID;
@property (readonly, copy, nonatomic) NSString *commandId;
@property (readonly, nonatomic) char isComplete;
@property (readonly, copy, nonatomic) NSDictionary *paramMatches;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCommandId:(id)a0 isComplete:(char)a1 paramMatches:(id)a2;
- (id)initWithVoiceCommandUUID:(id)a0 commandId:(id)a1 isComplete:(char)a2 paramMatches:(id)a3;

@end
