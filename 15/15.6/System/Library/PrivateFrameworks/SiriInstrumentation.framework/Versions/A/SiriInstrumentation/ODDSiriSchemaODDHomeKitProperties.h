@class NSData;

@interface ODDSiriSchemaODDHomeKitProperties : SISchemaInstrumentationMessage {
    struct { unsigned char hasHomekitHome : 1; } _has;
}

@property (nonatomic) char hasHomekitHome;
@property (nonatomic) char hasHasHomekitHome;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHasHomekitHome;
- (id)suppressMessageUnderConditions;

@end
