@class NSData, NSMutableArray;

@interface CKDPMergeableDeltaRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *deltas;
@property (readonly, nonatomic) BOOL hasContinuation;
@property (retain, nonatomic) NSData *continuation;

+ (Class)deltasType;

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
- (void)addDeltas:(id)a0;
- (void)clearDeltas;
- (id)deltasAtIndex:(unsigned long long)a0;
- (unsigned long long)deltasCount;

@end
