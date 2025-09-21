@class VCPProtoBounds;

@interface VCPProtoImageFaceResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {
    struct { unsigned char faceQuality : 1; } _has;
}

@property (nonatomic) int eyeExpression;
@property (nonatomic) int mouthExpression;
@property (nonatomic) int yaw;
@property (nonatomic) int position;
@property (retain, nonatomic) VCPProtoBounds *bounds;
@property (nonatomic) char isCloseup;
@property (nonatomic) char hasFaceQuality;
@property (nonatomic) float faceQuality;

+ (id)resultFromLegacyDictionary:(id)a0;

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
- (id)exportToLegacyDictionary;

@end
