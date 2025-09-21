@class NSMutableArray;

@interface AWDWiFiMetricNetworkPrefs : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char adhocNetsCount : 1; unsigned char applePersHotspotNetsCount : 1; unsigned char atjCanceledCount : 1; unsigned char atjUsedCount : 1; unsigned char captiveNetsCount : 1; unsigned char eapNetsCount : 1; unsigned char hiddenNetsCount : 1; unsigned char mostUsedCount : 1; unsigned char openNonCaptiveNetsCount : 1; unsigned char prefNetsCount : 1; unsigned char wapiNetsCount : 1; unsigned char wepNetsCount : 1; unsigned char wpaNetsCount : 1; unsigned char atjEnabled : 1; } _has;
}

@property (nonatomic) char hasAtjEnabled;
@property (nonatomic) char atjEnabled;
@property (nonatomic) char hasAtjCanceledCount;
@property (nonatomic) unsigned int atjCanceledCount;
@property (nonatomic) char hasAtjUsedCount;
@property (nonatomic) unsigned int atjUsedCount;
@property (nonatomic) char hasAdhocNetsCount;
@property (nonatomic) unsigned int adhocNetsCount;
@property (nonatomic) char hasPrefNetsCount;
@property (nonatomic) unsigned int prefNetsCount;
@property (nonatomic) char hasCaptiveNetsCount;
@property (nonatomic) unsigned int captiveNetsCount;
@property (nonatomic) char hasApplePersHotspotNetsCount;
@property (nonatomic) unsigned int applePersHotspotNetsCount;
@property (nonatomic) char hasWapiNetsCount;
@property (nonatomic) unsigned int wapiNetsCount;
@property (nonatomic) char hasMostUsedCount;
@property (nonatomic) unsigned int mostUsedCount;
@property (retain, nonatomic) NSMutableArray *mostUsedNetworks;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasHiddenNetsCount;
@property (nonatomic) unsigned int hiddenNetsCount;
@property (nonatomic) char hasWepNetsCount;
@property (nonatomic) unsigned int wepNetsCount;
@property (nonatomic) char hasWpaNetsCount;
@property (nonatomic) unsigned int wpaNetsCount;
@property (nonatomic) char hasEapNetsCount;
@property (nonatomic) unsigned int eapNetsCount;
@property (nonatomic) char hasOpenNonCaptiveNetsCount;
@property (nonatomic) unsigned int openNonCaptiveNetsCount;

+ (Class)mostUsedNetworksType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addMostUsedNetworks:(id)a0;
- (void)clearMostUsedNetworks;
- (id)mostUsedNetworksAtIndex:(unsigned long long)a0;
- (unsigned long long)mostUsedNetworksCount;

@end
