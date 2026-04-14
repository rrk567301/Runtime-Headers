@class NSNumber;

@interface CSAddressTag : CSExternalAnalysisTag <CSCoderEncoder>

@property (readonly, nonatomic) NSNumber *type;
@property (readonly, nonatomic) NSNumber *lat;
@property (readonly, nonatomic) NSNumber *lng;

- (void).cxx_destruct;
- (void)encodeWithCSCoder:(id)a0;
- (id)initWithAddress:(id)a0 synonyms:(id)a1 type:(id)a2 lat:(id)a3 lng:(id)a4 confidence:(double)a5;

@end
