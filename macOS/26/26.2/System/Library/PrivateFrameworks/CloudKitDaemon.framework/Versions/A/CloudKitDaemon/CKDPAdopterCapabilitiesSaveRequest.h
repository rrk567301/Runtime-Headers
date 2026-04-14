@class CKDPSignedVersionedBlob;

@interface CKDPAdopterCapabilitiesSaveRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasSignedSupportedAdopterCapabilities;
@property (retain, nonatomic) CKDPSignedVersionedBlob *signedSupportedAdopterCapabilities;

+ (id)options;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (Class)responseClass;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned int)requestTypeCode;

@end
