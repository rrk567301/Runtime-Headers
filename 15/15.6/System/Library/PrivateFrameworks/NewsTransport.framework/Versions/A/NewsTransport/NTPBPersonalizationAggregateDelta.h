@class NSString;

@interface NTPBPersonalizationAggregateDelta : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _events;
    struct { unsigned char defaultClicks : 1; unsigned char defaultImpressions : 1; unsigned char groupBias : 1; unsigned char impressionBias : 1; unsigned char timestamp : 1; } _has;
}

@property (readonly, nonatomic) char hasFeatureKey;
@property (retain, nonatomic) NSString *featureKey;
@property (nonatomic) char hasDefaultClicks;
@property (nonatomic) double defaultClicks;
@property (nonatomic) char hasDefaultImpressions;
@property (nonatomic) double defaultImpressions;
@property (readonly, nonatomic) unsigned long long eventsCount;
@property (readonly, nonatomic) unsigned int *events;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasImpressionBias;
@property (nonatomic) double impressionBias;
@property (nonatomic) char hasGroupBias;
@property (nonatomic) double groupBias;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addEvents:(unsigned int)a0;
- (void)clearEvents;
- (unsigned int)eventsAtIndex:(unsigned long long)a0;
- (void)setEvents:(unsigned int *)a0 count:(unsigned long long)a1;

@end
