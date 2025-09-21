@class ATXPBMissedNotificationRanking;

@interface ATXPBMissedNotificationRankingLoggingEvent : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char eventType : 1; } _has;
}

@property (readonly, nonatomic) char hasMissedNotificationRanking;
@property (retain, nonatomic) ATXPBMissedNotificationRanking *missedNotificationRanking;
@property (nonatomic) char hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsEventType:(id)a0;
- (id)eventTypeAsString:(int)a0;
- (id)jsonRepresentation;
- (id)initFromJSON:(id)a0;

@end
