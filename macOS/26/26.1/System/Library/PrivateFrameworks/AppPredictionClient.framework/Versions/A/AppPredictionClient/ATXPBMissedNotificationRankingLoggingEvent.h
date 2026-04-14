@class ATXPBMissedNotificationRanking;

@interface ATXPBMissedNotificationRankingLoggingEvent : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char eventType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMissedNotificationRanking;
@property (retain, nonatomic) ATXPBMissedNotificationRanking *missedNotificationRanking;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (int)StringAsEventType:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)eventTypeAsString:(int)a0;
- (void)writeTo:(id)a0;

@end
