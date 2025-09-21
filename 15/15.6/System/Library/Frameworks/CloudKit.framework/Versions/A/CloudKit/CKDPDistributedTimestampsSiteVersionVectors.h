@class CKDPDistributedTimestampsVersionVector;

@interface CKDPDistributedTimestampsSiteVersionVectors : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasPreviousVector;
@property (retain, nonatomic) CKDPDistributedTimestampsVersionVector *previousVector;
@property (readonly, nonatomic) char hasContentsVector;
@property (retain, nonatomic) CKDPDistributedTimestampsVersionVector *contentsVector;
@property (readonly, nonatomic) char hasRemovalsVector;
@property (retain, nonatomic) CKDPDistributedTimestampsVersionVector *removalsVector;
@property (readonly, nonatomic) char hasDependenciesVector;
@property (retain, nonatomic) CKDPDistributedTimestampsVersionVector *dependenciesVector;

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

@end
