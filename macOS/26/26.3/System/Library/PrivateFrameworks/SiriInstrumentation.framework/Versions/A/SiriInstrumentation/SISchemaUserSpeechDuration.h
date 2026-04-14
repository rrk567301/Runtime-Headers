@class NSString, NSData;

@interface SISchemaUserSpeechDuration : SISchemaInstrumentationMessage {
    struct { unsigned char durationMs : 1; } _has;
}

@property (nonatomic) long long durationMs;
@property (nonatomic) BOOL hasDurationMs;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteDurationMs;
- (void)deleteResultCandidateId;

@end
