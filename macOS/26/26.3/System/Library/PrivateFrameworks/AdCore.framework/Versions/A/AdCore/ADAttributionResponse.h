@class NSMutableArray;

@interface ADAttributionResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *versionedAttributionDetails;

+ (id)options;
+ (Class)versionedAttributionDetailsType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addVersionedAttributionDetails:(id)a0;
- (void)clearVersionedAttributionDetails;
- (id)versionedAttributionDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)versionedAttributionDetailsCount;

@end
