@class SIRINLUEXTERNALNLContext, SIRINLUEXTERNALLegacyNLContext;

@interface SIRINLUEXTERNALTurnContext : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasNlContext;
@property (retain, nonatomic) SIRINLUEXTERNALNLContext *nlContext;
@property (readonly, nonatomic) BOOL hasLegacyNlContext;
@property (retain, nonatomic) SIRINLUEXTERNALLegacyNLContext *legacyNlContext;

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

@end
