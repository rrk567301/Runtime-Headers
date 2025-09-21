@interface ATXPBDigestTimeline : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char digestRemovedTimestamp : 1; unsigned char firstCollapsedViewTimestamp : 1; unsigned char firstScheduledViewTimestamp : 1; unsigned char firstUpcomingViewTimestamp : 1; } _has;
}

@property (nonatomic) char hasFirstUpcomingViewTimestamp;
@property (nonatomic) double firstUpcomingViewTimestamp;
@property (nonatomic) char hasFirstCollapsedViewTimestamp;
@property (nonatomic) double firstCollapsedViewTimestamp;
@property (nonatomic) char hasFirstScheduledViewTimestamp;
@property (nonatomic) double firstScheduledViewTimestamp;
@property (nonatomic) char hasDigestRemovedTimestamp;
@property (nonatomic) double digestRemovedTimestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initFromJSON:(id)a0;

@end
