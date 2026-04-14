@class NSString, NSData;

@interface ASRSchemaASRFinalAudioPacketContainingSpeechReceived : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (copy, nonatomic) NSString *loggableSharedUserId;
@property (nonatomic) BOOL hasLoggableSharedUserId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (copy, nonatomic) NSString *loggableUserIdHash;
@property (nonatomic) BOOL hasLoggableUserIdHash;
@property (readonly, nonatomic) NSData *jsonData;

- (void)deleteExists;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteLoggableSharedUserId;
- (void)deleteLoggableUserIdHash;
- (void)deleteResultCandidateId;

@end
