@interface CSLocationTag : CSNumericAnalysisTag

@property (readonly, nonatomic) double lat;
@property (readonly, nonatomic) double lng;

- (void)encodeWithCSCoder:(id)a0;
- (id)initWithLocationID:(id)a0 lat:(double)a1 lng:(double)a2 confidence:(double)a3;
- (id)initWithPrimaryValue:(id)a0 components:(id)a1 confidence:(double)a2;

@end
