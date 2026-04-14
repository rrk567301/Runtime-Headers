@interface CSAddressTag : CSExternalAnalysisTag <CSCoderEncoder>

@property (readonly, nonatomic) long long code;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) double lat;
@property (readonly, nonatomic) double lng;

- (void)encodeWithCSCoder:(id)a0;
- (id)description;
- (id)initWithAddress:(id)a0 synonyms:(id)a1 code:(long long)a2 confidence:(double)a3;
- (id)initWithAddress:(id)a0 synonyms:(id)a1 code:(long long)a2 type:(long long)a3 lat:(double)a4 lng:(double)a5 confidence:(double)a6;
- (id)initWithAddress:(id)a0 synonyms:(id)a1 type:(id)a2 lat:(id)a3 lng:(id)a4 confidence:(double)a5;

@end
