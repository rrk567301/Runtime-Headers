@class NSData, SISchemaVersion;

@interface NLRouterSchemaNLRouterSubComponentSetupStarted : SISchemaInstrumentationMessage {
    struct { unsigned char nlRouterSubComponent : 1; } _has;
}

@property (nonatomic) int nlRouterSubComponent;
@property (nonatomic) char hasNlRouterSubComponent;
@property (retain, nonatomic) SISchemaVersion *assetVersion;
@property (nonatomic) char hasAssetVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAssetVersion;
- (void)deleteNlRouterSubComponent;
- (id)suppressMessageUnderConditions;

@end
