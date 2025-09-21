@interface PPM2LogEventOccurred : PBCodable <NSCopying> {
    struct { unsigned char event : 1; } _has;
}

@property (nonatomic) char hasEvent;
@property (nonatomic) int event;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsEvent:(id)a0;
- (id)eventAsString:(int)a0;

@end
