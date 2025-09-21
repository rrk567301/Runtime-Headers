@interface AWDSymptomsNoBackhaulPopUpMetric : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char action : 1; unsigned char networkType : 1; unsigned char networksShownAtLeastOnceInLast24Hrs : 1; unsigned char popUpShownForSecs : 1; unsigned char timeSinceShownOnSameNetworkSecs : 1; unsigned char timesShownOnAnyNetworkLast24Hrs : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) char hasPopUpShownForSecs;
@property (nonatomic) unsigned int popUpShownForSecs;
@property (nonatomic) char hasTimeSinceShownOnSameNetworkSecs;
@property (nonatomic) unsigned int timeSinceShownOnSameNetworkSecs;
@property (nonatomic) char hasTimesShownOnAnyNetworkLast24Hrs;
@property (nonatomic) unsigned int timesShownOnAnyNetworkLast24Hrs;
@property (nonatomic) char hasNetworksShownAtLeastOnceInLast24Hrs;
@property (nonatomic) unsigned int networksShownAtLeastOnceInLast24Hrs;
@property (nonatomic) char hasAction;
@property (nonatomic) int action;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)actionAsString:(int)a0;
- (void)copyTo:(id)a0;
- (int)StringAsAction:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsNetworkType:(id)a0;
- (id)networkTypeAsString:(int)a0;

@end
