@class ASRSchemaASRPackage, NSString, NSData;

@interface ASRSchemaASRPackageGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char isFinal : 1; unsigned char hasVoiceCommandInExhaustiveParses : 1; unsigned char hasVoiceCommandParses : 1; unsigned char hasVoiceCommandEditIntent : 1; unsigned char hasVoiceCommandAfterReranking : 1; unsigned char hasNoVoiceCommandAfterRespeakCheck : 1; } _has;
}

@property (retain, nonatomic) ASRSchemaASRPackage *package;
@property (nonatomic) BOOL hasPackage;
@property (nonatomic) BOOL isFinal;
@property (nonatomic) BOOL hasIsFinal;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (copy, nonatomic) NSString *loggableSharedUserId;
@property (nonatomic) BOOL hasLoggableSharedUserId;
@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (copy, nonatomic) NSString *acousticModelVersion;
@property (nonatomic) BOOL hasAcousticModelVersion;
@property (nonatomic) BOOL hasVoiceCommandInExhaustiveParses;
@property (nonatomic) BOOL hasHasVoiceCommandInExhaustiveParses;
@property (nonatomic) BOOL hasVoiceCommandParses;
@property (nonatomic) BOOL hasHasVoiceCommandParses;
@property (nonatomic) BOOL hasVoiceCommandEditIntent;
@property (nonatomic) BOOL hasHasVoiceCommandEditIntent;
@property (nonatomic) BOOL hasVoiceCommandAfterReranking;
@property (nonatomic) BOOL hasHasVoiceCommandAfterReranking;
@property (nonatomic) BOOL hasNoVoiceCommandAfterRespeakCheck;
@property (nonatomic) BOOL hasHasNoVoiceCommandAfterRespeakCheck;
@property (copy, nonatomic) NSString *loggableUserIdHash;
@property (nonatomic) BOOL hasLoggableUserIdHash;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteHasVoiceCommandEditIntent;
- (void)deleteAcousticModelVersion;
- (void)deleteHasNoVoiceCommandAfterRespeakCheck;
- (void)deleteHasVoiceCommandAfterReranking;
- (void)deleteHasVoiceCommandInExhaustiveParses;
- (void)deleteHasVoiceCommandParses;
- (void)deleteIsFinal;
- (void)deleteLoggableSharedUserId;
- (void)deleteLoggableUserIdHash;
- (void)deleteModelVersion;
- (void)deletePackage;
- (void)deleteResultCandidateId;

@end
