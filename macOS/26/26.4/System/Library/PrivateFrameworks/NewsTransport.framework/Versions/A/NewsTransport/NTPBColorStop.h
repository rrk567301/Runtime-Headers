@class NSString;

@interface NTPBColorStop : PBCodable <NSCopying> {
    struct { unsigned char location : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasColor;
@property (retain, nonatomic) NSString *color;
@property (nonatomic) BOOL hasLocation;
@property (nonatomic) int location;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;

@end
