@class NSString, CPLSuggestionAssetFlag, NSData;

@interface CPLSuggestionAsset : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasAssetIdentifier;
@property (retain, nonatomic) NSString *assetIdentifier;
@property (readonly, nonatomic) char hasAssetFlag;
@property (retain, nonatomic) CPLSuggestionAssetFlag *assetFlag;
@property (readonly, nonatomic) char hasActionData;
@property (retain, nonatomic) NSData *actionData;
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
