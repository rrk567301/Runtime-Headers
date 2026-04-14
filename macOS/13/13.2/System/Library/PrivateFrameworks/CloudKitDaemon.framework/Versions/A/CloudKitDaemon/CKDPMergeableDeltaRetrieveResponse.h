@class NSData, NSMutableArray;

@interface CKDPMergeableDeltaRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *deltas;
@property (readonly, nonatomic) BOOL hasContinuation;
@property (retain, nonatomic) NSData *continuation;

+ (Class)deltasType;

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
- (void)clearDeltas;
- (void)addDeltas:(id)a0;
- (unsigned long long)deltasCount;
- (id)deltasAtIndex:(unsigned long long)a0;

@end
