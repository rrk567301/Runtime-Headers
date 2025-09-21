@class NSUUID, NSString, NSDictionary;

@interface AFVoiceCommandGrammarParseCandidate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *voiceCommandUUID;
@property (readonly, copy, nonatomic) NSString *commandId;
@property (readonly, nonatomic) BOOL isComplete;
@property (readonly, copy, nonatomic) NSDictionary *paramMatches;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCommandId:(id)a0 isComplete:(BOOL)a1 paramMatches:(id)a2;
- (id)initWithVoiceCommandUUID:(id)a0 commandId:(id)a1 isComplete:(BOOL)a2 paramMatches:(id)a3;

@end
