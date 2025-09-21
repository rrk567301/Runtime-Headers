@class NSString, NSMutableArray;

@interface MADProtoFaceAsset : PBCodable <MADProtoAnalysisPhotosConversionProtocol, NSCopying> {
    struct { unsigned char adjustmentVersion : 1; unsigned char assetAdjustmentTimestamp : 1; unsigned char algorithmVersion : 1; } _has;
}

@property (readonly, nonatomic) char hasAssetLocalIdentifier;
@property (retain, nonatomic) NSString *assetLocalIdentifier;
@property (readonly, nonatomic) char hasAssetCloudIdentifier;
@property (retain, nonatomic) NSString *assetCloudIdentifier;
@property (nonatomic) char hasAssetAdjustmentTimestamp;
@property (nonatomic) double assetAdjustmentTimestamp;
@property (nonatomic) char hasAlgorithmVersion;
@property (nonatomic) int algorithmVersion;
@property (nonatomic) char hasAdjustmentVersion;
@property (nonatomic) double adjustmentVersion;
@property (retain, nonatomic) NSMutableArray *detectedFaces;

+ (Class)detectedFacesType;
+ (id)protoFromPhotosAsset:(id)a0;

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
- (void)addDetectedFaces:(id)a0;
- (void)clearDetectedFaces;
- (id)detectedFacesAtIndex:(unsigned long long)a0;
- (unsigned long long)detectedFacesCount;
- (void)persistToPhotosAsset:(id)a0;

@end
