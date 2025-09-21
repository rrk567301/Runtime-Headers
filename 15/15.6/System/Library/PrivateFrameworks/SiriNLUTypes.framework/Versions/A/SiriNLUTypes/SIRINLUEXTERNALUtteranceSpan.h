@interface SIRINLUEXTERNALUtteranceSpan : PBCodable <NSCopying> {
    struct { unsigned char endIndex : 1; unsigned char endMilliSeconds : 1; unsigned char endUnicodeScalarIndex : 1; unsigned char startIndex : 1; unsigned char startMilliSeconds : 1; unsigned char startUnicodeScalarIndex : 1; } _has;
}

@property (nonatomic) char hasStartIndex;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) char hasEndIndex;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) char hasStartUnicodeScalarIndex;
@property (nonatomic) unsigned int startUnicodeScalarIndex;
@property (nonatomic) char hasEndUnicodeScalarIndex;
@property (nonatomic) unsigned int endUnicodeScalarIndex;
@property (nonatomic) char hasStartMilliSeconds;
@property (nonatomic) int startMilliSeconds;
@property (nonatomic) char hasEndMilliSeconds;
@property (nonatomic) int endMilliSeconds;

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
