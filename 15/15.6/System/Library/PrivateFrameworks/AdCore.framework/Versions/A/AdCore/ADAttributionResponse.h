@class NSMutableArray;

@interface ADAttributionResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *versionedAttributionDetails;

+ (id)options;
+ (Class)versionedAttributionDetailsType;

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
- (void)addVersionedAttributionDetails:(id)a0;
- (void)clearVersionedAttributionDetails;
- (id)versionedAttributionDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)versionedAttributionDetailsCount;

@end
