@interface RTMapItemProviderReverseGeocodeParameters : NSObject

@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) double relatedPlacesConfidence;

- (id)init;
- (id)description;
- (id)initWithDefaultsManager:(id)a0;
- (id)initWithConfidence:(double)a0 relatedPlacesConfidence:(double)a1;

@end
