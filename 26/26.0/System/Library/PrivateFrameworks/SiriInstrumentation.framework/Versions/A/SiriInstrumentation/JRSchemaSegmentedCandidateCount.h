@class NSData, SISchemaUUID;

@interface JRSchemaSegmentedCandidateCount : SISchemaInstrumentationMessage {
    struct { unsigned char count : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *candidateId;
@property (nonatomic) BOOL hasCandidateId;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasCount;
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
- (void)deleteCount;
- (void)deleteCandidateId;

@end
