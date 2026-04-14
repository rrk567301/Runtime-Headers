@class NSMutableArray;

@interface VCPProtoVideoSceneThumbnailResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (retain, nonatomic) NSMutableArray *sceneToThumbnails;

+ (id)resultFromLegacyDictionary:(id)a0;
+ (Class)sceneToThumbnailType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addSceneToThumbnail:(id)a0;
- (void)clearSceneToThumbnails;
- (id)exportToLegacyDictionary;
- (id)sceneToThumbnailAtIndex:(unsigned long long)a0;
- (unsigned long long)sceneToThumbnailsCount;

@end
