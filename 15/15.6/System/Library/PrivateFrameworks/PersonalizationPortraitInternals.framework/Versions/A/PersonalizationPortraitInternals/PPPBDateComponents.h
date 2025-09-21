@class NSString;

@interface PPPBDateComponents : PBCodable <NSCopying> {
    struct { unsigned char day : 1; unsigned char month : 1; unsigned char year : 1; } _has;
}

@property (nonatomic) char hasDay;
@property (nonatomic) int day;
@property (nonatomic) char hasMonth;
@property (nonatomic) int month;
@property (nonatomic) char hasYear;
@property (nonatomic) int year;
@property (readonly, nonatomic) char hasCalendarIdentifier;
@property (retain, nonatomic) NSString *calendarIdentifier;
@property (readonly, nonatomic) char hasTimeZoneName;
@property (retain, nonatomic) NSString *timeZoneName;

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
