@interface VCMediaNegotiationBlobBandwidthSettings : PBCodable <NSCopying> {
    struct { unsigned char configurationExtension : 1; } _has;
}

@property (nonatomic) int configuration;
@property (nonatomic) unsigned int maxBandwidth;
@property (nonatomic) BOOL hasConfigurationExtension;
@property (nonatomic) int configurationExtension;

+ (int)bandwidthConfigurationFor2GWithArbiterMode:(unsigned char)a0;
+ (int)bandwidthConfigurationFor3GWithArbiterMode:(unsigned char)a0;
+ (int)bandwidthConfigurationFor5GWithArbiterMode:(unsigned char)a0;
+ (int)bandwidthConfigurationForAWDLWithArbiterMode:(unsigned char)a0;
+ (int)bandwidthConfigurationForLTEWithArbiterMode:(unsigned char)a0;
+ (int)bandwidthConfigurationForUSBWithArbiterMode:(unsigned char)a0;
+ (int)bandwidthConfigurationForWiFiWithArbiterMode:(unsigned char)a0;
+ (int)bandwidthConfigurationForWiredWithArbiterMode:(unsigned char)a0;
+ (int)bandwidthConfigurationWithArbiterMode:(unsigned char)a0 connectionType:(int)a1;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsConfigurationExtension:(id)a0;
- (id)configurationExtensionAsString:(int)a0;
- (int)StringAsConfiguration:(id)a0;
- (id)configurationAsString:(int)a0;
- (id)newBandwidthConfigurations;

@end
