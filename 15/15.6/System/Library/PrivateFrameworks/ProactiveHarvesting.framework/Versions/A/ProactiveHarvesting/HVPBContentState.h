@class NSMutableArray;

@interface HVPBContentState : PBCodable <NSCopying> {
    struct { unsigned char levelOfService : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *consumers;
@property (nonatomic) char hasLevelOfService;
@property (nonatomic) int levelOfService;

+ (Class)consumersType;

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
- (void)addConsumers:(id)a0;
- (void)clearConsumers;
- (id)consumersAtIndex:(unsigned long long)a0;
- (unsigned long long)consumersCount;

@end
