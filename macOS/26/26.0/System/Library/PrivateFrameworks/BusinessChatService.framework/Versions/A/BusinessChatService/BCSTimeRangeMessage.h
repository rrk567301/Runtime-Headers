@interface BCSTimeRangeMessage : PBCodable <NSCopying> {
    struct { unsigned char from : 1; unsigned char to : 1; unsigned char allDay : 1; } _has;
}

@property (nonatomic) BOOL hasFrom;
@property (nonatomic) int from;
@property (nonatomic) BOOL hasTo;
@property (nonatomic) int to;
@property (nonatomic) BOOL hasAllDay;
@property (nonatomic) BOOL allDay;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
