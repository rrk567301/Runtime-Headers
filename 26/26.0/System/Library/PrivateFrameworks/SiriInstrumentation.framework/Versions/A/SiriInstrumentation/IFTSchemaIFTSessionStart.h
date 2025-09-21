@class NSData;

@interface IFTSchemaIFTSessionStart : SISchemaInstrumentationMessage {
    struct { unsigned char originatingDeviceWasLocal : 1; } _has;
}

@property (nonatomic) BOOL originatingDeviceWasLocal;
@property (nonatomic) BOOL hasOriginatingDeviceWasLocal;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteOriginatingDeviceWasLocal;

@end
