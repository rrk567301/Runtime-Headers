@class NSString, NSData, CPLMemoryAssetFlag;

@interface CPLMemoryAsset : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasAssetIdentifier;
@property (retain, nonatomic) NSString *assetIdentifier;
@property (readonly, nonatomic) char hasAssetFlag;
@property (retain, nonatomic) CPLMemoryAssetFlag *assetFlag;
@property (readonly, nonatomic) char hasAssetMovieData;
@property (retain, nonatomic) NSData *assetMovieData;
@property (readonly, nonatomic) char hasMasterIdentifier;
@property (retain, nonatomic) NSString *masterIdentifier;

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

@end
