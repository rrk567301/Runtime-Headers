@class NSMutableArray;

@interface ADAttributionResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *versionedAttributionDetails;

+ (id)options;
+ (Class)versionedAttributionDetailsType;

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
- (void)addVersionedAttributionDetails:(id)a0;
- (void)clearVersionedAttributionDetails;
- (id)versionedAttributionDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)versionedAttributionDetailsCount;

@end
