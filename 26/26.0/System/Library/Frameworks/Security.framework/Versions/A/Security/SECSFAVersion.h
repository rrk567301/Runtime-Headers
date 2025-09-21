@interface SECSFAVersion : PBCodable <NSCopying> {
    struct { unsigned char build : 1; unsigned char major : 1; unsigned char minor : 1; unsigned char productName : 1; } _has;
}

@property (nonatomic) BOOL hasProductName;
@property (nonatomic) int productName;
@property (nonatomic) BOOL hasMajor;
@property (nonatomic) long long major;
@property (nonatomic) BOOL hasMinor;
@property (nonatomic) long long minor;
@property (nonatomic) BOOL hasBuild;
@property (nonatomic) long long build;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsProductName:(id)a0;
- (id)productNameAsString:(int)a0;

@end
