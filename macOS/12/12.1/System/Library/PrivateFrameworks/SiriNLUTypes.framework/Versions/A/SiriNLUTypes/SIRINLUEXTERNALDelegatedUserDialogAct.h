@class NSString, SIRICOMMONStringValue;

@interface SIRINLUEXTERNALDelegatedUserDialogAct : PBCodable <NSCopying> {
    struct { unsigned char asrHypothesisIndex : 1; } _has;
}

@property (nonatomic) BOOL hasAsrHypothesisIndex;
@property (nonatomic) unsigned int asrHypothesisIndex;
@property (readonly, nonatomic) BOOL hasRewrittenUtterance;
@property (retain, nonatomic) SIRICOMMONStringValue *rewrittenUtterance;
@property (readonly, nonatomic) BOOL hasExternalParserId;
@property (retain, nonatomic) NSString *externalParserId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;

@end
