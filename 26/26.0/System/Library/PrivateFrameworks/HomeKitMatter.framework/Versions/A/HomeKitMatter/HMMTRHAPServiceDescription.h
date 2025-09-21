@class NSString, NSArray, NSDictionary, NSNumber;

@interface HMMTRHAPServiceDescription : HMFObject

@property (readonly) NSString *serviceType;
@property (readonly) NSArray *linkedServiceTypes;
@property (retain) NSNumber *endpoint;
@property (retain) NSString *name;
@property (readonly) NSArray *requiredCharacteristics;
@property (readonly) NSArray *optionalCharacteristics;
@property (readonly) NSDictionary *characteristicFeatureMap;
@property (readonly) BOOL optionalServiceLabelIndexIncluded;

+ (id)descriptionsDictionaryFromAccessoryInfo:(id)a0;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (void)addFeatureMapForCharacteristic:(id)a0 featureMap:(id)a1;
- (void)addMandatoryCharacteristic:(id)a0;
- (void)addOptionalCharacteristic:(id)a0;
- (id)initWithType:(id)a0 linkedServiceTypes:(id)a1 endpoint:(id)a2 name:(id)a3;
- (id)initWithType:(id)a0 linkedServiceTypes:(id)a1 endpoint:(id)a2 name:(id)a3 optionalServiceLabelIndexIncluded:(BOOL)a4;
- (id)padCharacteristicIDWithZeros:(id)a0;
- (void)removeCharacteristic:(id)a0;

@end
