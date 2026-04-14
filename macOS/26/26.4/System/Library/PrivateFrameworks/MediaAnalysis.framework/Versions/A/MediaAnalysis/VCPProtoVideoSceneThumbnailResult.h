@class NSMutableArray;

@interface VCPProtoVideoSceneThumbnailResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (retain, nonatomic) NSMutableArray *sceneToThumbnails;

+ (id)resultFromLegacyDictionary:(id)a0;
+ (Class)sceneToThumbnailType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addSceneToThumbnail:(id)a0;
- (void)clearSceneToThumbnails;
- (id)exportToLegacyDictionary;
- (id)sceneToThumbnailAtIndex:(unsigned long long)a0;
- (unsigned long long)sceneToThumbnailsCount;

@end
