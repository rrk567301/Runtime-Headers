@class NSData;

@interface ODDSiriSchemaODDHomeKitProperties : SISchemaInstrumentationMessage {
    struct { unsigned char hasHomekitHome : 1; } _has;
}

@property (nonatomic) BOOL hasHomekitHome;
@property (nonatomic) BOOL hasHasHomekitHome;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHasHomekitHome;

@end
