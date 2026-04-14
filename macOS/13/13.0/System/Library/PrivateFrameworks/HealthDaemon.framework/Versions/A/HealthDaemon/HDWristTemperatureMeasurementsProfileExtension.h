@class HDFeatureAvailabilityManager, NSString, HDWristTemperatureIdentifierManager, HDBackgroundFeatureDeliveryManager;

@interface HDWristTemperatureMeasurementsProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider> {
    HDFeatureAvailabilityManager *_featureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_featureDeliveryManager;
    HDWristTemperatureIdentifierManager *_wristTemperatureIdentifierManager;
    NSString *_featureIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
