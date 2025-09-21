@class NSData;

@interface PEGASUSSchemaPEGASUSMapsExecution : SISchemaInstrumentationMessage {
    struct { unsigned char mapsFeature : 1; unsigned char mapsQueryLabel : 1; unsigned char isSearchAlongRouteRequest : 1; unsigned char isProxySearchResult : 1; unsigned char isSpellCorrected : 1; } _has;
}

@property (nonatomic) int mapsFeature;
@property (nonatomic) char hasMapsFeature;
@property (nonatomic) int mapsQueryLabel;
@property (nonatomic) char hasMapsQueryLabel;
@property (nonatomic) char isSearchAlongRouteRequest;
@property (nonatomic) char hasIsSearchAlongRouteRequest;
@property (nonatomic) char isProxySearchResult;
@property (nonatomic) char hasIsProxySearchResult;
@property (nonatomic) char isSpellCorrected;
@property (nonatomic) char hasIsSpellCorrected;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsSearchAlongRouteRequest;
- (void)deleteIsProxySearchResult;
- (void)deleteIsSpellCorrected;
- (void)deleteMapsFeature;
- (void)deleteMapsQueryLabel;
- (id)suppressMessageUnderConditions;

@end
