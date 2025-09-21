@class CKDPSignedVersionedBlob;

@interface CKDPAdopterCapabilitiesCheckResponse : PBCodable <NSCopying> {
    struct { unsigned char isSupported : 1; } _has;
}

@property (nonatomic) char hasIsSupported;
@property (nonatomic) char isSupported;
@property (readonly, nonatomic) char hasSignedSupportedAdopterCapabilities;
@property (retain, nonatomic) CKDPSignedVersionedBlob *signedSupportedAdopterCapabilities;
@property (readonly, nonatomic) char hasSignedShareUsage;
@property (retain, nonatomic) CKDPSignedVersionedBlob *signedShareUsage;
@property (readonly, nonatomic) char hasSignedZoneUsage;
@property (retain, nonatomic) CKDPSignedVersionedBlob *signedZoneUsage;

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

@end
