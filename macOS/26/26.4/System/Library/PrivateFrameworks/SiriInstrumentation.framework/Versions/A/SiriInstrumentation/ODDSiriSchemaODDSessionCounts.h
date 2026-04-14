@class NSData;

@interface ODDSiriSchemaODDSessionCounts : SISchemaInstrumentationMessage {
    struct { unsigned char usdxSessionCount : 1; } _has;
}

@property (nonatomic) unsigned int usdxSessionCount;
@property (nonatomic) BOOL hasUsdxSessionCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteUsdxSessionCount;

@end
