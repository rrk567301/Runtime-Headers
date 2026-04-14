@class NSMutableArray;

@interface HVPBContentState : PBCodable <NSCopying> {
    struct { unsigned char levelOfService : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *consumers;
@property (nonatomic) BOOL hasLevelOfService;
@property (nonatomic) int levelOfService;

+ (Class)consumersType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearConsumers;
- (void)addConsumers:(id)a0;
- (unsigned long long)consumersCount;
- (id)consumersAtIndex:(unsigned long long)a0;

@end
