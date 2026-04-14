@class NSMutableArray;

@interface VCPProtoVideoSceneThumbnailResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (retain, nonatomic) NSMutableArray *sceneToThumbnails;

+ (id)resultFromLegacyDictionary:(id)a0;
+ (Class)sceneToThumbnailType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addSceneToThumbnail:(id)a0;
- (void)clearSceneToThumbnails;
- (id)exportToLegacyDictionary;
- (id)sceneToThumbnailAtIndex:(unsigned long long)a0;
- (unsigned long long)sceneToThumbnailsCount;

@end
