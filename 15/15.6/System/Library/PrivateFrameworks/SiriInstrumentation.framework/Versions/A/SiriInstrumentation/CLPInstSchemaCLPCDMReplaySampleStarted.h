@class NSString, NSData, SISchemaUUID;

@interface CLPInstSchemaCLPCDMReplaySampleStarted : SISchemaInstrumentationMessage {
    struct { unsigned char utteranceRepetitionsInCalendarWeek : 1; unsigned char wasHabitualUserDuringCalendarWeek : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) char hasOriginalRequestId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) char hasResultCandidateId;
@property (nonatomic) unsigned int utteranceRepetitionsInCalendarWeek;
@property (nonatomic) char hasUtteranceRepetitionsInCalendarWeek;
@property (nonatomic) char wasHabitualUserDuringCalendarWeek;
@property (nonatomic) char hasWasHabitualUserDuringCalendarWeek;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) char hasTrpId;
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
- (void)deleteOriginalRequestId;
- (void)deleteResultCandidateId;
- (void)deleteTrpId;
- (void)deleteUtteranceRepetitionsInCalendarWeek;
- (void)deleteWasHabitualUserDuringCalendarWeek;
- (id)suppressMessageUnderConditions;

@end
