@class NSData, SISchemaUUID;

@interface NETSchemaNETClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char provider : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *netId;
@property (nonatomic) BOOL hasNetId;
@property (retain, nonatomic) SISchemaUUID *networkConnectionId;
@property (nonatomic) BOOL hasNetworkConnectionId;
@property (nonatomic) int provider;
@property (nonatomic) BOOL hasProvider;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteNetId;
- (void)deleteNetworkConnectionId;
- (void)deleteProvider;

@end
