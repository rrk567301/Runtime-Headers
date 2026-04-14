@class NSString;

@interface NTPBPoint : PBCodable <NSCopying> {
    struct { unsigned char x : 1; unsigned char y : 1; } _has;
}

@property (nonatomic) BOOL hasX;
@property (nonatomic) double x;
@property (nonatomic) BOOL hasY;
@property (nonatomic) double y;
@property (readonly, nonatomic) BOOL hasColor;
@property (retain, nonatomic) NSString *color;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;

@end
