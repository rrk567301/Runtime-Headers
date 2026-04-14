@class NSString, NSData;

@interface NLRouterSchemaNLRouterSubComponentHandleStarted : SISchemaInstrumentationMessage {
    struct { unsigned char nlRouterSubComponent : 1; } _has;
}

@property (nonatomic) int nlRouterSubComponent;
@property (nonatomic) BOOL hasNlRouterSubComponent;
@property (copy, nonatomic) NSString *assetVersion;
@property (nonatomic) BOOL hasAssetVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAssetVersion;
- (void)deleteNlRouterSubComponent;

@end
