@class NSString;

@interface NTPBPersonalizationAggregate : PBCodable <NSCopying> {
    struct { unsigned char clicks : 1; unsigned char eventCount : 1; unsigned char impressions : 1; unsigned char timestamp : 1; } _has;
}

@property (readonly, nonatomic) char hasFeatureKey;
@property (retain, nonatomic) NSString *featureKey;
@property (nonatomic) char hasClicks;
@property (nonatomic) double clicks;
@property (nonatomic) char hasImpressions;
@property (nonatomic) double impressions;
@property (nonatomic) char hasEventCount;
@property (nonatomic) unsigned long long eventCount;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
