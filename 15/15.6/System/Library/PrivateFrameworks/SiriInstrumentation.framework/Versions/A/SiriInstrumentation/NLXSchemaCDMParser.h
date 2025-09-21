@class NSData;

@interface NLXSchemaCDMParser : SISchemaInstrumentationMessage {
    struct { unsigned char algorithm : 1; unsigned char parserId : 1; } _has;
}

@property (nonatomic) int algorithm;
@property (nonatomic) char hasAlgorithm;
@property (nonatomic) int parserId;
@property (nonatomic) char hasParserId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAlgorithm;
- (void)deleteParserId;
- (id)suppressMessageUnderConditions;

@end
