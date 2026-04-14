@class NSString;

@interface NTPBColorStop : PBCodable <NSCopying> {
    struct { unsigned char location : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasColor;
@property (retain, nonatomic) NSString *color;
@property (nonatomic) BOOL hasLocation;
@property (nonatomic) int location;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
