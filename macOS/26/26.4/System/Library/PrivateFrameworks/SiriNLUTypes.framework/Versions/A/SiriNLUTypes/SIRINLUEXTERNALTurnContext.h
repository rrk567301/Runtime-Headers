@class SIRINLUEXTERNALNLContext, SIRINLUEXTERNALLegacyNLContext;

@interface SIRINLUEXTERNALTurnContext : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasNlContext;
@property (retain, nonatomic) SIRINLUEXTERNALNLContext *nlContext;
@property (readonly, nonatomic) BOOL hasLegacyNlContext;
@property (retain, nonatomic) SIRINLUEXTERNALLegacyNLContext *legacyNlContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
