@class CKDPSignedVersionedBlob, NSData;

@interface CKDPAdopterCapabilitiesCheckResponse : PBCodable <NSCopying> {
    struct { unsigned char isSupported : 1; } _has;
}

@property (nonatomic) BOOL hasIsSupported;
@property (nonatomic) BOOL isSupported;
@property (readonly, nonatomic) BOOL hasSignedSupportedAdopterCapabilities;
@property (retain, nonatomic) CKDPSignedVersionedBlob *signedSupportedAdopterCapabilities;
@property (readonly, nonatomic) BOOL hasSignedShareUsage;
@property (retain, nonatomic) CKDPSignedVersionedBlob *signedShareUsage;
@property (readonly, nonatomic) BOOL hasSignedZoneUsage;
@property (retain, nonatomic) CKDPSignedVersionedBlob *signedZoneUsage;
@property (readonly, nonatomic) BOOL hasContinuation;
@property (retain, nonatomic) NSData *continuation;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
