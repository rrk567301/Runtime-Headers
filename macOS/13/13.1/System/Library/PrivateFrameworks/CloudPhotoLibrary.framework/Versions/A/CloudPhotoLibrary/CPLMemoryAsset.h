@class NSString, NSData, CPLMemoryAssetFlag;

@interface CPLMemoryAsset : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAssetIdentifier;
@property (retain, nonatomic) NSString *assetIdentifier;
@property (readonly, nonatomic) BOOL hasAssetFlag;
@property (retain, nonatomic) CPLMemoryAssetFlag *assetFlag;
@property (readonly, nonatomic) BOOL hasAssetMovieData;
@property (retain, nonatomic) NSData *assetMovieData;
@property (readonly, nonatomic) BOOL hasMasterFingerprint;
@property (retain, nonatomic) NSString *masterFingerprint;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
