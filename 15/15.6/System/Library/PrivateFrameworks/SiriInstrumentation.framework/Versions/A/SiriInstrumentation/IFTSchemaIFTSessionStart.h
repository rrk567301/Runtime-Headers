@class NSData;

@interface IFTSchemaIFTSessionStart : SISchemaInstrumentationMessage {
    struct { unsigned char originatingDeviceWasLocal : 1; } _has;
}

@property (nonatomic) char originatingDeviceWasLocal;
@property (nonatomic) char hasOriginatingDeviceWasLocal;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteOriginatingDeviceWasLocal;
- (id)suppressMessageUnderConditions;

@end
