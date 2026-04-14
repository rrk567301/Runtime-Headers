@class NSData;

@interface HALSchemaHALContextCollectorFetchStarted : SISchemaInstrumentationMessage {
    struct { unsigned char isContextCollectorLocal : 1; } _has;
}

@property (nonatomic) BOOL isContextCollectorLocal;
@property (nonatomic) BOOL hasIsContextCollectorLocal;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteIsContextCollectorLocal;

@end
