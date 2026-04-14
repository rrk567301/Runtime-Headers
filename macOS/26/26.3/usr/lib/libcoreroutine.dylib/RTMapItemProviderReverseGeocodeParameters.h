@interface RTMapItemProviderReverseGeocodeParameters : NSObject

@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) double relatedPlacesConfidence;

- (id)initWithDefaultsManager:(id)a0;
- (id)description;
- (id)init;
- (id)initWithConfidence:(double)a0 relatedPlacesConfidence:(double)a1;

@end
