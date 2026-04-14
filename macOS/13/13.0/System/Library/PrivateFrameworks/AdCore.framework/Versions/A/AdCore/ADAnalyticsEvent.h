@interface ADAnalyticsEvent : PBCodable <NSCopying>

@property (nonatomic) int event;
@property (nonatomic) double timestamp;

+ (id)options;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)eventAsString:(int)a0;
- (int)StringAsEvent:(id)a0;

@end
