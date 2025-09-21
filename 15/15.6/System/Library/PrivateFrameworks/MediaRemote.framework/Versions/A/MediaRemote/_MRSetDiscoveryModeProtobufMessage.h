@class _MRDiscoverySessionConfigurationProtobuf;

@interface _MRSetDiscoveryModeProtobufMessage : PBCodable <NSCopying> {
    struct { unsigned char features : 1; unsigned char mode : 1; } _has;
}

@property (nonatomic) char hasMode;
@property (nonatomic) int mode;
@property (nonatomic) char hasFeatures;
@property (nonatomic) int features;
@property (readonly, nonatomic) char hasConfiguration;
@property (retain, nonatomic) _MRDiscoverySessionConfigurationProtobuf *configuration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsMode:(id)a0;
- (id)modeAsString:(int)a0;
- (int)StringAsFeatures:(id)a0;
- (id)featuresAsString:(int)a0;

@end
