@class NSString;

@interface SGM2DDLinkShown : PBCodable <NSCopying> {
    struct { unsigned char interface : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasInterface;
@property (nonatomic) int interface;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsInterface:(id)a0;
- (id)interfaceAsString:(int)a0;

@end
