@class SIRINLUINTERNALCCQROverrideTemplate, SIRINLUEXTERNALUserParse, SIRINLUINTERNALLVCOverrideValue, SIRINLUINTERNALPlanOverrideValue;

@interface SIRINLUINTERNALOverrideValue : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCcqrOverrideTemplate;
@property (retain, nonatomic) SIRINLUINTERNALCCQROverrideTemplate *ccqrOverrideTemplate;
@property (readonly, nonatomic) BOOL hasUserParse;
@property (retain, nonatomic) SIRINLUEXTERNALUserParse *userParse;
@property (readonly, nonatomic) BOOL hasLvcOverrideValue;
@property (retain, nonatomic) SIRINLUINTERNALLVCOverrideValue *lvcOverrideValue;
@property (readonly, nonatomic) BOOL hasPlanOverrideValue;
@property (retain, nonatomic) SIRINLUINTERNALPlanOverrideValue *planOverrideValue;

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
