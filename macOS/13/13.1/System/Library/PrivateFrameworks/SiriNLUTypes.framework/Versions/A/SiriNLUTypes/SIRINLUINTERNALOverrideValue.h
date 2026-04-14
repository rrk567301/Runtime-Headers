@class SIRINLUINTERNALCCQROverrideTemplate, SIRINLUEXTERNALUserParse;

@interface SIRINLUINTERNALOverrideValue : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCcqrOverrideTemplate;
@property (retain, nonatomic) SIRINLUINTERNALCCQROverrideTemplate *ccqrOverrideTemplate;
@property (readonly, nonatomic) BOOL hasUserParse;
@property (retain, nonatomic) SIRINLUEXTERNALUserParse *userParse;

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
