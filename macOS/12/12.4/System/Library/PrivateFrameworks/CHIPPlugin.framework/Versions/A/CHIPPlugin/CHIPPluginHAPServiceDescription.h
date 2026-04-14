@class NSString, NSNumber, NSArray;

@interface CHIPPluginHAPServiceDescription : HMFObject

@property (readonly) NSString *serviceType;
@property (retain) NSNumber *endpoint;
@property (readonly) NSArray *requiredCharacteristics;
@property (readonly) NSArray *optionalCharacteristics;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithType:(id)a0 endpoint:(id)a1;
- (void)addMandatoryCharacteristic:(id)a0;
- (void)addOptionalCharacteristic:(id)a0;
- (id)padCharacteristicIDWithZeros:(id)a0;

@end
