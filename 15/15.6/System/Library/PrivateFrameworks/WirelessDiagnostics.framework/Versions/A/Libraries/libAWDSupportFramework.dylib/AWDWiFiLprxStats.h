@interface AWDWiFiLprxStats : PBCodable <NSCopying> {
    struct { unsigned char phyActiveDuration : 1; unsigned char phySearchDuration : 1; unsigned char timestamp : 1; unsigned char lprxEnterCnt : 1; unsigned char lprxExitCnt : 1; unsigned char phyActiveCount : 1; unsigned char phySearchCount : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasPhySearchDuration;
@property (nonatomic) unsigned long long phySearchDuration;
@property (nonatomic) char hasPhySearchCount;
@property (nonatomic) unsigned int phySearchCount;
@property (nonatomic) char hasPhyActiveDuration;
@property (nonatomic) unsigned long long phyActiveDuration;
@property (nonatomic) char hasPhyActiveCount;
@property (nonatomic) unsigned int phyActiveCount;
@property (nonatomic) char hasLprxEnterCnt;
@property (nonatomic) unsigned int lprxEnterCnt;
@property (nonatomic) char hasLprxExitCnt;
@property (nonatomic) unsigned int lprxExitCnt;

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
