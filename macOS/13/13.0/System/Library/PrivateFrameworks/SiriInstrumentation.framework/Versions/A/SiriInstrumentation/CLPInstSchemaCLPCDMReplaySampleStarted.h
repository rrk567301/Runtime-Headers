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
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteResultCandidateId;
- (void)deleteOriginalRequestId;
- (void)deleteUtteranceRepetitionsInCalendarWeek;
- (void)deleteWasHabitualUserDuringCalendarWeek;

@end
