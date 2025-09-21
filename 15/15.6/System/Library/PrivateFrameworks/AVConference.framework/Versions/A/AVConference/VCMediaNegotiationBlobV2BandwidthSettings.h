@interface VCMediaNegotiationBlobV2BandwidthSettings : PBCodable <NSCopying> {
    struct { unsigned char cap2G : 1; unsigned char cap3G : 1; unsigned char cap5G : 1; unsigned char capLTE : 1; unsigned char capWifi : 1; } _has;
}

@property (nonatomic) char hasCap2G;
@property (nonatomic) unsigned int cap2G;
@property (nonatomic) char hasCap3G;
@property (nonatomic) unsigned int cap3G;
@property (nonatomic) char hasCapLTE;
@property (nonatomic) unsigned int capLTE;
@property (nonatomic) char hasCap5G;
@property (nonatomic) unsigned int cap5G;
@property (nonatomic) char hasCapWifi;
@property (nonatomic) unsigned int capWifi;

+ (id)filteredSetForArbiterMode:(unsigned char)a0 bandwidthConfigurations:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)bandwidthConfigurations;
- (id)initWithBandwidthConfigurations:(id)a0;
- (char)isDefaultSettings;
- (void)printWithLogFile:(void *)a0 prefix:(id)a1;
- (void)setupCap2G:(unsigned int)a0;
- (void)setupCap3G:(unsigned int)a0;
- (void)setupCap5G:(unsigned int)a0;
- (char)setupCapForBandwidthConfiguration:(id)a0;
- (void)setupCapLTE:(unsigned int)a0;
- (void)setupCapWifi:(unsigned int)a0;

@end
