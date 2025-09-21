@interface SECSFAVersion : PBCodable <NSCopying> {
    struct { unsigned char build : 1; unsigned char major : 1; unsigned char minor : 1; unsigned char productName : 1; } _has;
}

@property (nonatomic) char hasProductName;
@property (nonatomic) int productName;
@property (nonatomic) char hasMajor;
@property (nonatomic) long long major;
@property (nonatomic) char hasMinor;
@property (nonatomic) long long minor;
@property (nonatomic) char hasBuild;
@property (nonatomic) long long build;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsProductName:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)productNameAsString:(int)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
