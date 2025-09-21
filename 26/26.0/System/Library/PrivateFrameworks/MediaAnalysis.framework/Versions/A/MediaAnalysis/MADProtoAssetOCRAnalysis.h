@class NSString, NSData;

@interface MADProtoAssetOCRAnalysis : PBCodable <MADProtoAnalysisPhotosConversionProtocol, NSCopying>

@property (retain, nonatomic) NSString *assetCloudIdentifier;
@property (nonatomic) double assetAdjustmentTimestamp;
@property (nonatomic) int algorithmVersion;
@property (nonatomic) double adjustmentVersion;
@property (readonly, nonatomic) BOOL hasCharacterRecognitionData;
@property (retain, nonatomic) NSData *characterRecognitionData;
@property (readonly, nonatomic) BOOL hasMachineReadableCodeData;
@property (retain, nonatomic) NSData *machineReadableCodeData;

+ (id)protoFromPhotosAsset:(id)a0;

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
- (void)persistToPhotosAsset:(id)a0;

@end
