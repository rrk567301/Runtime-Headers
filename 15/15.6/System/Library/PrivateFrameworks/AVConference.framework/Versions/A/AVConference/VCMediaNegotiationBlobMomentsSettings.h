@interface VCMediaNegotiationBlobMomentsSettings : PBCodable <NSCopying> {
    struct { unsigned char multiwayCapabilities : 1; unsigned char supportedImageTypes : 1; unsigned char supportedVideoCodecs : 1; } _has;
}

@property (nonatomic) unsigned int capabilities;
@property (nonatomic) char hasSupportedVideoCodecs;
@property (nonatomic) unsigned int supportedVideoCodecs;
@property (nonatomic) char hasSupportedImageTypes;
@property (nonatomic) unsigned int supportedImageTypes;
@property (nonatomic) char hasMultiwayCapabilities;
@property (nonatomic) unsigned int multiwayCapabilities;

+ (unsigned int)avcMomentsCapabilitiesForMultiwayMomentsCapabilities:(int)a0;
+ (unsigned int)capabilitiesBitmapWithCapabilities:(unsigned char)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)newImageTypeSet;
- (id)initWithVideoCodecs:(id)a0 imageTypes:(id)a1 capabilities:(unsigned char)a2 multiwayCapabilities:(unsigned char)a3;
- (id)newVideoCodecSet;

@end
