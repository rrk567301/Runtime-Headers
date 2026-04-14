@interface ADAnalyticsEvent : PBCodable <NSCopying>

@property (nonatomic) int event;
@property (nonatomic) double timestamp;

+ (id)options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsEvent:(id)a0;
- (id)eventAsString:(int)a0;

@end
