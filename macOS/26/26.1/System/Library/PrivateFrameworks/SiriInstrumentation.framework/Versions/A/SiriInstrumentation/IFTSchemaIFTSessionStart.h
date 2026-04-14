@class NSData;

@interface IFTSchemaIFTSessionStart : SISchemaInstrumentationMessage {
    struct { unsigned char originatingDeviceWasLocal : 1; } _has;
}

@property (nonatomic) BOOL originatingDeviceWasLocal;
@property (nonatomic) BOOL hasOriginatingDeviceWasLocal;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteOriginatingDeviceWasLocal;

@end
