@class NSString;

@interface SIRINLUEXTERNALRewriteMessage : PBCodable <NSCopying> {
    struct { unsigned char rewriteType : 1; } _has;
}

@property (nonatomic) BOOL hasRewriteType;
@property (nonatomic) int rewriteType;
@property (readonly, nonatomic) BOOL hasRewrittenUtterance;
@property (retain, nonatomic) NSString *rewrittenUtterance;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)rewriteTypeAsString:(int)a0;
- (int)StringAsRewriteType:(id)a0;

@end
