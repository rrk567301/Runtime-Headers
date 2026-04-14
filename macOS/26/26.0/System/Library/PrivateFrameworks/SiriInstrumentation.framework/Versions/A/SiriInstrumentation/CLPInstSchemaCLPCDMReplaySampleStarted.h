@class NSString, NSData, SISchemaUUID;

@interface CLPInstSchemaCLPCDMReplaySampleStarted : SISchemaInstrumentationMessage {
    struct { unsigned char utteranceRepetitionsInCalendarWeek : 1; unsigned char wasHabitualUserDuringCalendarWeek : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) BOOL hasOriginalRequestId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (nonatomic) unsigned int utteranceRepetitionsInCalendarWeek;
@property (nonatomic) BOOL hasUtteranceRepetitionsInCalendarWeek;
@property (nonatomic) BOOL wasHabitualUserDuringCalendarWeek;
@property (nonatomic) BOOL hasWasHabitualUserDuringCalendarWeek;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) BOOL hasTrpId;
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
- (void)deleteOriginalRequestId;
- (void)deleteResultCandidateId;
- (void)deleteTrpId;
- (void)deleteUtteranceRepetitionsInCalendarWeek;
- (void)deleteWasHabitualUserDuringCalendarWeek;

@end
