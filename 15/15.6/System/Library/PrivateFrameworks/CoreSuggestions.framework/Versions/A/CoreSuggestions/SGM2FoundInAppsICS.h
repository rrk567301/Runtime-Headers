@class NSString;

@interface SGM2FoundInAppsICS : PBCodable <NSCopying> {
    struct { unsigned char datetime : 1; unsigned char timezone : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) char hasTimezone;
@property (nonatomic) int timezone;
@property (nonatomic) char hasDatetime;
@property (nonatomic) int datetime;

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
- (int)StringAsTimezone:(id)a0;
- (int)StringAsDatetime:(id)a0;
- (id)datetimeAsString:(int)a0;
- (id)timezoneAsString:(int)a0;

@end
