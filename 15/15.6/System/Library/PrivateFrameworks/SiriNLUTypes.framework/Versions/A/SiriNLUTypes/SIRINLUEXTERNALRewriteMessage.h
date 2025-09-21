@class NSString;

@interface SIRINLUEXTERNALRewriteMessage : PBCodable <NSCopying> {
    struct { unsigned char rewriteType : 1; } _has;
}

@property (nonatomic) char hasRewriteType;
@property (nonatomic) int rewriteType;
@property (readonly, nonatomic) char hasRewrittenUtterance;
@property (retain, nonatomic) NSString *rewrittenUtterance;

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
- (int)StringAsRewriteType:(id)a0;
- (id)rewriteTypeAsString:(int)a0;

@end
