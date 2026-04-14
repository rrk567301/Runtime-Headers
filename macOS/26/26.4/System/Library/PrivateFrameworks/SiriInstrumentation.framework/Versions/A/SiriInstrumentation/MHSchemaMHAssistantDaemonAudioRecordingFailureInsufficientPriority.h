@class NSArray, NSData;

@interface MHSchemaMHAssistantDaemonAudioRecordingFailureInsufficientPriority : SISchemaInstrumentationMessage {
    struct { unsigned char audioSessionCategory : 1; unsigned char audioSessionMode : 1; } _has;
}

@property (copy, nonatomic) NSArray *activeSessionDisplayIds;
@property (nonatomic) int audioSessionCategory;
@property (nonatomic) BOOL hasAudioSessionCategory;
@property (nonatomic) int audioSessionMode;
@property (nonatomic) BOOL hasAudioSessionMode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)activeSessionDisplayIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)activeSessionDisplayIdsCount;
- (void)addActiveSessionDisplayIds:(id)a0;
- (void)clearActiveSessionDisplayIds;
- (void)deleteActiveSessionDisplayIds;
- (void)deleteAudioSessionCategory;
- (void)deleteAudioSessionMode;

@end
