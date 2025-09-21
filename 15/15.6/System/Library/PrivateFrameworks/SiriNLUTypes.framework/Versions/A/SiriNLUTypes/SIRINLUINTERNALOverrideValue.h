@class SIRINLUINTERNALCCQROverrideTemplate, SIRINLUEXTERNALUserParse, SIRINLUINTERNALLVCOverrideValue, SIRINLUINTERNALPlanOverrideValue;

@interface SIRINLUINTERNALOverrideValue : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasCcqrOverrideTemplate;
@property (retain, nonatomic) SIRINLUINTERNALCCQROverrideTemplate *ccqrOverrideTemplate;
@property (readonly, nonatomic) char hasUserParse;
@property (retain, nonatomic) SIRINLUEXTERNALUserParse *userParse;
@property (readonly, nonatomic) char hasLvcOverrideValue;
@property (retain, nonatomic) SIRINLUINTERNALLVCOverrideValue *lvcOverrideValue;
@property (readonly, nonatomic) char hasPlanOverrideValue;
@property (retain, nonatomic) SIRINLUINTERNALPlanOverrideValue *planOverrideValue;

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
