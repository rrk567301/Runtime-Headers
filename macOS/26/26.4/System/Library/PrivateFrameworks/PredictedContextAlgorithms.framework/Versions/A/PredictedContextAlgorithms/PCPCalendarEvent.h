@class NSString, PCPLocation;

@interface PCPCalendarEvent : PBCodable <NSCopying> {
    struct { unsigned char endTimeCFAbsolute : 1; unsigned char startTimeCFAbsolute : 1; unsigned char status : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasCalendarId;
@property (retain, nonatomic) NSString *calendarId;
@property (readonly, nonatomic) BOOL hasTitleOfEvent;
@property (retain, nonatomic) NSString *titleOfEvent;
@property (readonly, nonatomic) BOOL hasEventId;
@property (retain, nonatomic) NSString *eventId;
@property (readonly, nonatomic) BOOL hasLocationTitle;
@property (retain, nonatomic) NSString *locationTitle;
@property (nonatomic) BOOL hasStartTimeCFAbsolute;
@property (nonatomic) double startTimeCFAbsolute;
@property (nonatomic) BOOL hasEndTimeCFAbsolute;
@property (nonatomic) double endTimeCFAbsolute;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) PCPLocation *location;

- (id)statusAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsStatus:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
