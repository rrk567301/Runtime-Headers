@class NSMutableArray;

@interface ADAttributionResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *versionedAttributionDetails;

+ (id)options;
+ (Class)versionedAttributionDetailsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addVersionedAttributionDetails:(id)a0;
- (void)clearVersionedAttributionDetails;
- (id)versionedAttributionDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)versionedAttributionDetailsCount;

@end
