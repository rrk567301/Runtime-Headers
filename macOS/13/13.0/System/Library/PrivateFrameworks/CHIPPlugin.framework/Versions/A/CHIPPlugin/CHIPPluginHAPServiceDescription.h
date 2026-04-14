@class NSString, NSArray, NSDictionary, NSNumber;

@interface CHIPPluginHAPServiceDescription : HMFObject

@property (readonly) NSString *serviceType;
@property (retain) NSNumber *endpoint;
@property (readonly) NSArray *requiredCharacteristics;
@property (readonly) NSArray *optionalCharacteristics;
@property (readonly) NSDictionary *characteristicFeatureMap;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithType:(id)a0 endpoint:(id)a1;
- (void)addOptionalCharacteristic:(id)a0;
- (void)addMandatoryCharacteristic:(id)a0;
- (void)addFeatureMapForCharacteristic:(id)a0 featureMap:(id)a1;
- (void)removeCharacteristic:(id)a0;
- (id)padCharacteristicIDWithZeros:(id)a0;

@end
