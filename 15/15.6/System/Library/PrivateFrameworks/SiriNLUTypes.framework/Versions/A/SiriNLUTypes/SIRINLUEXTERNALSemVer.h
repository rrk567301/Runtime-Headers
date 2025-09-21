@interface SIRINLUEXTERNALSemVer : PBCodable <NSCopying> {
    struct { unsigned char majorVersion : 1; unsigned char minorVersion : 1; unsigned char patchVersion : 1; } _has;
}

@property (nonatomic) char hasMajorVersion;
@property (nonatomic) unsigned int majorVersion;
@property (nonatomic) char hasMinorVersion;
@property (nonatomic) unsigned int minorVersion;
@property (nonatomic) char hasPatchVersion;
@property (nonatomic) unsigned int patchVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
