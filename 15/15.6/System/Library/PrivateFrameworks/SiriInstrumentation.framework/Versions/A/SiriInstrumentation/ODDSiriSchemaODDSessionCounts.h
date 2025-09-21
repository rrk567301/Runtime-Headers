@class NSData;

@interface ODDSiriSchemaODDSessionCounts : SISchemaInstrumentationMessage {
    struct { unsigned char usdxSessionCount : 1; } _has;
}

@property (nonatomic) unsigned int usdxSessionCount;
@property (nonatomic) char hasUsdxSessionCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteUsdxSessionCount;
- (id)suppressMessageUnderConditions;

@end
