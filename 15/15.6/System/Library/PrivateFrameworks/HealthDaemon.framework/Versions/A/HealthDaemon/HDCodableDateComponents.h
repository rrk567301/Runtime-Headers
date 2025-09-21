@class NSString;

@interface HDCodableDateComponents : PBCodable <NSCopying> {
    struct { unsigned char day : 1; unsigned char era : 1; unsigned char hour : 1; unsigned char minute : 1; unsigned char month : 1; unsigned char nanosecond : 1; unsigned char quarter : 1; unsigned char second : 1; unsigned char weekOfMonth : 1; unsigned char weekOfYear : 1; unsigned char weekday : 1; unsigned char weekdayOrdinal : 1; unsigned char year : 1; unsigned char yearForWeekOfYear : 1; } _has;
}

@property (nonatomic) char hasEra;
@property (nonatomic) long long era;
@property (nonatomic) char hasYear;
@property (nonatomic) long long year;
@property (nonatomic) char hasMonth;
@property (nonatomic) long long month;
@property (nonatomic) char hasDay;
@property (nonatomic) long long day;
@property (nonatomic) char hasHour;
@property (nonatomic) long long hour;
@property (nonatomic) char hasMinute;
@property (nonatomic) long long minute;
@property (nonatomic) char hasSecond;
@property (nonatomic) long long second;
@property (nonatomic) char hasWeekday;
@property (nonatomic) long long weekday;
@property (nonatomic) char hasWeekdayOrdinal;
@property (nonatomic) long long weekdayOrdinal;
@property (nonatomic) char hasQuarter;
@property (nonatomic) long long quarter;
@property (nonatomic) char hasWeekOfMonth;
@property (nonatomic) long long weekOfMonth;
@property (nonatomic) char hasWeekOfYear;
@property (nonatomic) long long weekOfYear;
@property (nonatomic) char hasYearForWeekOfYear;
@property (nonatomic) long long yearForWeekOfYear;
@property (nonatomic) char hasNanosecond;
@property (nonatomic) long long nanosecond;
@property (readonly, nonatomic) char hasCalendar;
@property (retain, nonatomic) NSString *calendar;
@property (readonly, nonatomic) char hasTimeZone;
@property (retain, nonatomic) NSString *timeZone;

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

@end
