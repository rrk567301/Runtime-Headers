@class NSData, SISchemaUUID;

@interface GRRSchemaGRRRanking : SISchemaInstrumentationMessage {
    struct { unsigned char parseType : 1; unsigned char score : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *parseId;
@property (nonatomic) char hasParseId;
@property (nonatomic) int parseType;
@property (nonatomic) char hasParseType;
@property (nonatomic) double score;
@property (nonatomic) char hasScore;
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
- (void)deleteParseType;
- (void)deleteParseId;
- (void)deleteScore;
- (id)suppressMessageUnderConditions;

@end
