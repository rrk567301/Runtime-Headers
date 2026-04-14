@class SIRINLUINTERNALITFMITFMParserResponse, SIRINLUEXTERNALLanguageVariantResult;

@interface CDMLVCResponseCommand : CDMBaseCommand

@property int classLabel;
@property (readonly, nonatomic) SIRINLUINTERNALITFMITFMParserResponse *itfmResponse;
@property (readonly, nonatomic) SIRINLUEXTERNALLanguageVariantResult *languageVariantResult;

- (void).cxx_destruct;
- (id)description;
- (id)initWithITFMResponse:(id)a0 languageVariantResult:(id)a1;

@end
