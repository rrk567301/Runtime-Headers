@class VCPProtoBounds;

@interface MADProtoSceneClassification : PBCodable <NSCopying>

@property (nonatomic) unsigned long long extendedSceneIdentifier;
@property (nonatomic) double confidence;
@property (readonly, nonatomic) BOOL hasBoundingBox;
@property (retain, nonatomic) VCPProtoBounds *boundingBox;

+ (id)protoFromPhotosSceneClassification:(id)a0;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)photosSceneClassification;

@end
