@class NSData, SISchemaUUID;

@interface JRSchemaSegmentedCandidateCount : SISchemaInstrumentationMessage {
    struct { unsigned char count : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *candidateId;
@property (nonatomic) char hasCandidateId;
@property (nonatomic) unsigned int count;
@property (nonatomic) char hasCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCandidateId;
- (id)suppressMessageUnderConditions;

@end
