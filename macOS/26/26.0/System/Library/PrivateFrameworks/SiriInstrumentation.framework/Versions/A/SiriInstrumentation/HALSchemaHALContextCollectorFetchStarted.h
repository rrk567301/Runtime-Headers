@class NSData;

@interface HALSchemaHALContextCollectorFetchStarted : SISchemaInstrumentationMessage {
    struct { unsigned char isContextCollectorLocal : 1; } _has;
}

@property (nonatomic) BOOL isContextCollectorLocal;
@property (nonatomic) BOOL hasIsContextCollectorLocal;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteIsContextCollectorLocal;

@end
