@class CLPMeta, NSMutableArray, NSData;

@interface CLPPassCollectionRequest : PBRequest <NSCopying>

@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *passLocations;
@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSData *signature;

+ (Class)passLocationType;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)clearPassLocations;
- (void)addPassLocation:(id)a0;
- (unsigned long long)passLocationsCount;
- (id)passLocationAtIndex:(unsigned long long)a0;

@end
