@class NSData, SISchemaVersion;

@interface NLRouterSchemaNLRouterSubComponentSetupStarted : SISchemaInstrumentationMessage {
    struct { unsigned char nlRouterSubComponent : 1; } _has;
}

@property (nonatomic) int nlRouterSubComponent;
@property (nonatomic) BOOL hasNlRouterSubComponent;
@property (retain, nonatomic) SISchemaVersion *assetVersion;
@property (nonatomic) BOOL hasAssetVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteAssetVersion;
- (void)deleteNlRouterSubComponent;

@end
