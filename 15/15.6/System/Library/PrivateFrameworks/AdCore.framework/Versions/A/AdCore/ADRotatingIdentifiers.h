@class NSString, NSMutableArray;

@interface ADRotatingIdentifiers : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *experimentBuckets;
@property (readonly, nonatomic) char hasRotatedAnonymousId;
@property (retain, nonatomic) NSString *rotatedAnonymousId;
@property (readonly, nonatomic) char hasAnonymousSessionId;
@property (retain, nonatomic) NSString *anonymousSessionId;

+ (Class)experimentBucketsType;

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
- (void)addExperimentBuckets:(id)a0;
- (void)clearExperimentBuckets;
- (id)experimentBucketsAtIndex:(unsigned long long)a0;
- (unsigned long long)experimentBucketsCount;

@end
