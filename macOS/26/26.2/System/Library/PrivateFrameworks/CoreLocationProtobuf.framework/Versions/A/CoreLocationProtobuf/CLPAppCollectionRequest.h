@class CLPMeta, NSMutableArray, NSData;

@interface CLPAppCollectionRequest : PBRequest <NSCopying>

@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *appLocations;
@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSData *signature;

+ (Class)appLocationType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (Class)responseClass;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (void)addAppLocation:(id)a0;
- (id)appLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)appLocationsCount;
- (void)clearAppLocations;

@end
