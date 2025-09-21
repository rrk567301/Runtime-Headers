@class NSData;

@interface PCPAlgorithmState : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAlgorithmState;
@property (retain, nonatomic) NSData *algorithmState;
@property (readonly, nonatomic) BOOL hasAlgorithmStateWorkouts;
@property (retain, nonatomic) NSData *algorithmStateWorkouts;

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

@end
