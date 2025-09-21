@class NSString;

@interface SIRINLUINTERNALSubwordToken : PBCodable <NSCopying> {
    struct { unsigned char subwordTokenIndex : 1; unsigned char tokenIndex : 1; } _has;
}

@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) char hasSubwordTokenIndex;
@property (nonatomic) int subwordTokenIndex;
@property (nonatomic) char hasTokenIndex;
@property (nonatomic) int tokenIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
