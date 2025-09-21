@class NSString;

@interface SIRINLUEXTERNALRewriteMessage : PBCodable <NSCopying> {
    struct { unsigned char rewriteType : 1; } _has;
}

@property (nonatomic) BOOL hasRewriteType;
@property (nonatomic) int rewriteType;
@property (readonly, nonatomic) BOOL hasRewrittenUtterance;
@property (retain, nonatomic) NSString *rewrittenUtterance;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsRewriteType:(id)a0;
- (id)rewriteTypeAsString:(int)a0;

@end
