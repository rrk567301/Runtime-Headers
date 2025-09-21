@interface ATXAnchorModelPBLaunchHistoryMetadata : PBCodable <NSCopying> {
    struct { unsigned char launchesInLast12Hours : 1; unsigned char launchesInLast14Days : 1; unsigned char launchesInLast24Hours : 1; unsigned char launchesInLast28Days : 1; unsigned char launchesInLast2Hours : 1; unsigned char launchesInLast48Hours : 1; unsigned char launchesInLast7Days : 1; } _has;
}

@property (nonatomic) char hasLaunchesInLast2Hours;
@property (nonatomic) unsigned int launchesInLast2Hours;
@property (nonatomic) char hasLaunchesInLast7Days;
@property (nonatomic) unsigned int launchesInLast7Days;
@property (nonatomic) char hasLaunchesInLast14Days;
@property (nonatomic) unsigned int launchesInLast14Days;
@property (nonatomic) char hasLaunchesInLast28Days;
@property (nonatomic) unsigned int launchesInLast28Days;
@property (nonatomic) char hasLaunchesInLast12Hours;
@property (nonatomic) unsigned int launchesInLast12Hours;
@property (nonatomic) char hasLaunchesInLast24Hours;
@property (nonatomic) unsigned int launchesInLast24Hours;
@property (nonatomic) char hasLaunchesInLast48Hours;
@property (nonatomic) unsigned int launchesInLast48Hours;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
