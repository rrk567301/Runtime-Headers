@class NSString;

@interface NTPBColorStop : PBCodable <NSCopying> {
    struct { unsigned char location : 1; } _has;
}

@property (readonly, nonatomic) char hasColor;
@property (retain, nonatomic) NSString *color;
@property (nonatomic) char hasLocation;
@property (nonatomic) int location;

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
