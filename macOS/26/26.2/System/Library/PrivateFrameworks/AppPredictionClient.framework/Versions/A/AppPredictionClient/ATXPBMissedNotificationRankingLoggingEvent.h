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

- (id)eventTypeAsString:(int)a0;
- (int)StringAsEventType:(id)a0;
- (id)initFromJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;

@end
