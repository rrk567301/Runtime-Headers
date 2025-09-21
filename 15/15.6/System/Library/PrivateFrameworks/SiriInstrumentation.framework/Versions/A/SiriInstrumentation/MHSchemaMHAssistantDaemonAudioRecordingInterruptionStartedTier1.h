@class NSArray, NSData, SISchemaUUID;

@interface MHSchemaMHAssistantDaemonAudioRecordingInterruptionStartedTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char audioSessionCategory : 1; unsigned char audioSessionMode : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (copy, nonatomic) NSArray *activeSessionDisplayIds;
@property (nonatomic) int audioSessionCategory;
@property (nonatomic) char hasAudioSessionCategory;
@property (nonatomic) int audioSessionMode;
@property (nonatomic) char hasAudioSessionMode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)activeSessionDisplayIdsAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (unsigned long long)activeSessionDisplayIdsCount;
- (void)addActiveSessionDisplayIds:(id)a0;
- (void)clearActiveSessionDisplayIds;
- (void)deleteActiveSessionDisplayIds;
- (void)deleteAudioSessionCategory;
- (void)deleteAudioSessionMode;
- (void)deleteLinkId;
- (id)suppressMessageUnderConditions;

@end
