@class NSString, NSMutableArray;

@interface CPLMomentSharePreviewData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *previewImageDatas;
@property (readonly, nonatomic) BOOL hasKeyAssetIdentifier;
@property (retain, nonatomic) NSString *keyAssetIdentifier;
@property (readonly, nonatomic) BOOL hasCropRectString;
@property (retain, nonatomic) NSString *cropRectString;
@property (retain, nonatomic) NSMutableArray *curatedAssetIdentifiers;

+ (Class)previewImageDataType;
+ (Class)curatedAssetIdentifiersType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addPreviewImageData:(id)a0;
- (void)clearPreviewImageDatas;
- (unsigned long long)previewImageDatasCount;
- (id)previewImageDataAtIndex:(unsigned long long)a0;
- (void)clearCuratedAssetIdentifiers;
- (void)addCuratedAssetIdentifiers:(id)a0;
- (unsigned long long)curatedAssetIdentifiersCount;
- (id)curatedAssetIdentifiersAtIndex:(unsigned long long)a0;

@end
