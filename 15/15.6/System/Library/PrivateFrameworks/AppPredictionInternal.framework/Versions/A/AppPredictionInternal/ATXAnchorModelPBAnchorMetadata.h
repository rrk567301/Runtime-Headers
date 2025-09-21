@class NSString;

@interface ATXAnchorModelPBAnchorMetadata : PBCodable <NSCopying> {
    struct { unsigned char anchorEventType : 1; unsigned char anchorType : 1; unsigned char dayOfMonth : 1; unsigned char dayOfWeek : 1; unsigned char hourOfDay : 1; unsigned char locationType : 1; unsigned char month : 1; } _has;
}

@property (nonatomic) char hasAnchorType;
@property (nonatomic) int anchorType;
@property (readonly, nonatomic) char hasAnchorEventIdentifier;
@property (retain, nonatomic) NSString *anchorEventIdentifier;
@property (nonatomic) char hasAnchorEventType;
@property (nonatomic) int anchorEventType;
@property (nonatomic) char hasMonth;
@property (nonatomic) unsigned int month;
@property (nonatomic) char hasDayOfMonth;
@property (nonatomic) unsigned int dayOfMonth;
@property (nonatomic) char hasHourOfDay;
@property (nonatomic) unsigned int hourOfDay;
@property (nonatomic) char hasDayOfWeek;
@property (nonatomic) int dayOfWeek;
@property (readonly, nonatomic) char hasLocationIdentifier;
@property (retain, nonatomic) NSString *locationIdentifier;
@property (nonatomic) char hasLocationType;
@property (nonatomic) int locationType;

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
- (int)StringAsLocationType:(id)a0;
- (id)locationTypeAsString:(int)a0;
- (int)StringAsDayOfWeek:(id)a0;
- (id)dayOfWeekAsString:(int)a0;
- (int)StringAsAnchorEventType:(id)a0;
- (int)StringAsAnchorType:(id)a0;
- (id)anchorEventTypeAsString:(int)a0;
- (id)anchorTypeAsString:(int)a0;

@end
