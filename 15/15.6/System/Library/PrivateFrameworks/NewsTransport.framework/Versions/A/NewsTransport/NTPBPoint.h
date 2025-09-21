@class NSString;

@interface NTPBPoint : PBCodable <NSCopying> {
    struct { unsigned char x : 1; unsigned char y : 1; } _has;
}

@property (nonatomic) char hasX;
@property (nonatomic) double x;
@property (nonatomic) char hasY;
@property (nonatomic) double y;
@property (readonly, nonatomic) char hasColor;
@property (retain, nonatomic) NSString *color;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
