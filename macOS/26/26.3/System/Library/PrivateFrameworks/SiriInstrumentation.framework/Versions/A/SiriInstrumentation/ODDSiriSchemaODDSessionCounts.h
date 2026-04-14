@class NSData;

@interface ODDSiriSchemaODDSessionCounts : SISchemaInstrumentationMessage {
    struct { unsigned char usdxSessionCount : 1; } _has;
}

@property (nonatomic) unsigned int usdxSessionCount;
@property (nonatomic) BOOL hasUsdxSessionCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteUsdxSessionCount;

@end
