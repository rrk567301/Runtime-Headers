@class NSString;

@interface SIRINLUINTERNALRewriteToken : PBCodable <NSCopying> {
    struct { unsigned char asrConfidence : 1; unsigned char endIndex : 1; unsigned char startIndex : 1; unsigned char removeSpaceAfter : 1; } _has;
}

@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) char hasStartIndex;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) char hasEndIndex;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) char hasAsrConfidence;
@property (nonatomic) double asrConfidence;
@property (readonly, nonatomic) char hasPhoneSequence;
@property (retain, nonatomic) NSString *phoneSequence;
@property (nonatomic) char hasRemoveSpaceAfter;
@property (nonatomic) char removeSpaceAfter;

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
