@class NSString, NSMutableArray;

@interface ADRotatingIdentifiers : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *experimentBuckets;
@property (readonly, nonatomic) BOOL hasRotatedAnonymousId;
@property (retain, nonatomic) NSString *rotatedAnonymousId;
@property (readonly, nonatomic) BOOL hasAnonymousSessionId;
@property (retain, nonatomic) NSString *anonymousSessionId;

+ (Class)experimentBucketsType;

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
- (void)addExperimentBuckets:(id)a0;
- (void)clearExperimentBuckets;
- (id)experimentBucketsAtIndex:(unsigned long long)a0;
- (unsigned long long)experimentBucketsCount;

@end
