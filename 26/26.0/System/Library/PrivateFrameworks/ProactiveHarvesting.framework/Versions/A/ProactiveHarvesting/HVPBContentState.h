@class NSMutableArray;

@interface HVPBContentState : PBCodable <NSCopying> {
    struct { unsigned char levelOfService : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *consumers;
@property (nonatomic) BOOL hasLevelOfService;
@property (nonatomic) int levelOfService;

+ (Class)consumersType;

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
- (void)addConsumers:(id)a0;
- (void)clearConsumers;
- (id)consumersAtIndex:(unsigned long long)a0;
- (unsigned long long)consumersCount;

@end
