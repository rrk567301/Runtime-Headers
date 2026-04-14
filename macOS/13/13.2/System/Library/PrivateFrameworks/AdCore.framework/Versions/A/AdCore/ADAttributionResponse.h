@class NSMutableArray;

@interface ADAttributionResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *versionedAttributionDetails;

+ (id)options;
+ (Class)versionedAttributionDetailsType;

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
- (void)clearVersionedAttributionDetails;
- (void)addVersionedAttributionDetails:(id)a0;
- (unsigned long long)versionedAttributionDetailsCount;
- (id)versionedAttributionDetailsAtIndex:(unsigned long long)a0;

@end
