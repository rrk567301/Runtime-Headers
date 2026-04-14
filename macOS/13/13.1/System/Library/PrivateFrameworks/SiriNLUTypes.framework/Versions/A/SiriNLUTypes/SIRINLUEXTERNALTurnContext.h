@class SIRINLUEXTERNALNLContext, SIRINLUEXTERNALLegacyNLContext;

@interface SIRINLUEXTERNALTurnContext : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasNlContext;
@property (retain, nonatomic) SIRINLUEXTERNALNLContext *nlContext;
@property (readonly, nonatomic) BOOL hasLegacyNlContext;
@property (retain, nonatomic) SIRINLUEXTERNALLegacyNLContext *legacyNlContext;

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

@end
