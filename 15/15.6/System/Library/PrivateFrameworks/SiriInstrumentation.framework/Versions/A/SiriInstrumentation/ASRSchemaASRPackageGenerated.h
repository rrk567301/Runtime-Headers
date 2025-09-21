@class ASRSchemaASRPackage, NSString, NSData;

@interface ASRSchemaASRPackageGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char isFinal : 1; unsigned char hasVoiceCommandInExhaustiveParses : 1; unsigned char hasVoiceCommandParses : 1; unsigned char hasVoiceCommandEditIntent : 1; unsigned char hasVoiceCommandAfterReranking : 1; unsigned char hasNoVoiceCommandAfterRespeakCheck : 1; } _has;
}

@property (retain, nonatomic) ASRSchemaASRPackage *package;
@property (nonatomic) char hasPackage;
@property (nonatomic) char isFinal;
@property (nonatomic) char hasIsFinal;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) char hasResultCandidateId;
@property (copy, nonatomic) NSString *loggableSharedUserId;
@property (nonatomic) char hasLoggableSharedUserId;
@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) char hasModelVersion;
@property (copy, nonatomic) NSString *acousticModelVersion;
@property (nonatomic) char hasAcousticModelVersion;
@property (nonatomic) char hasVoiceCommandInExhaustiveParses;
@property (nonatomic) char hasHasVoiceCommandInExhaustiveParses;
@property (nonatomic) char hasVoiceCommandParses;
@property (nonatomic) char hasHasVoiceCommandParses;
@property (nonatomic) char hasVoiceCommandEditIntent;
@property (nonatomic) char hasHasVoiceCommandEditIntent;
@property (nonatomic) char hasVoiceCommandAfterReranking;
@property (nonatomic) char hasHasVoiceCommandAfterReranking;
@property (nonatomic) char hasNoVoiceCommandAfterRespeakCheck;
@property (nonatomic) char hasHasNoVoiceCommandAfterRespeakCheck;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteHasVoiceCommandEditIntent;
- (void)deleteAcousticModelVersion;
- (void)deleteHasNoVoiceCommandAfterRespeakCheck;
- (void)deleteHasVoiceCommandAfterReranking;
- (void)deleteHasVoiceCommandInExhaustiveParses;
- (void)deleteHasVoiceCommandParses;
- (void)deleteIsFinal;
- (void)deleteLoggableSharedUserId;
- (void)deleteModelVersion;
- (void)deletePackage;
- (void)deleteResultCandidateId;
- (id)suppressMessageUnderConditions;

@end
