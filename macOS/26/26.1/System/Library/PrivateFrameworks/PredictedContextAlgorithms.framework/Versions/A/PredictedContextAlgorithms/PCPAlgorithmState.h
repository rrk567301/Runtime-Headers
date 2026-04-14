@class NSData;

@interface PCPAlgorithmState : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAlgorithmState;
@property (retain, nonatomic) NSData *algorithmState;
@property (readonly, nonatomic) BOOL hasAlgorithmStateWorkouts;
@property (retain, nonatomic) NSData *algorithmStateWorkouts;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
