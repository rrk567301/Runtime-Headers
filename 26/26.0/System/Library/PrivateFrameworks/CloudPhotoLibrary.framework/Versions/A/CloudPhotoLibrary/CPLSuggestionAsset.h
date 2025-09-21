@class NSString, CPLSuggestionAssetFlag, NSData;

@interface CPLSuggestionAsset : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAssetIdentifier;
@property (retain, nonatomic) NSString *assetIdentifier;
@property (readonly, nonatomic) BOOL hasAssetFlag;
@property (retain, nonatomic) CPLSuggestionAssetFlag *assetFlag;
@property (readonly, nonatomic) BOOL hasActionData;
@property (retain, nonatomic) NSData *actionData;
@property (readonly, nonatomic) BOOL hasMasterIdentifier;
@property (retain, nonatomic) NSString *masterIdentifier;

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

@end
