@class NSString;

@interface BMPBAlarmEvent : PBCodable <NSCopying> {
    struct { unsigned char eventType : 1; unsigned char lastEventType : 1; unsigned char isSleepAlarm : 1; } _has;
}

@property (nonatomic) char hasIsSleepAlarm;
@property (nonatomic) char isSleepAlarm;
@property (nonatomic) char hasEventType;
@property (nonatomic) int eventType;
@property (readonly, nonatomic) char hasAlarmID;
@property (retain, nonatomic) NSString *alarmID;
@property (nonatomic) char hasLastEventType;
@property (nonatomic) int lastEventType;

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
- (int)StringAsLastEventType:(id)a0;
- (id)lastEventTypeAsString:(int)a0;

@end
