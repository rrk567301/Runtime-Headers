@class NSString, NSObject;
@protocol OS_ar_session, OS_ar_data_providers, OS_ar_device_anchor, OS_ar_world_tracking_provider;

@interface VFXARKitWorldProvider : NSObject <VFXWorldProviderProtocol> {
    NSObject<OS_ar_session> *_session;
    NSObject<OS_ar_data_providers> *_dataProviders;
    NSObject<OS_ar_world_tracking_provider> *_worldTrackingProvider;
    NSObject<OS_ar_device_anchor> *_arDeviceAnchor;
    struct { void /* unknown type, empty encoding */ columns[4]; } _arLastValidAnchorTransform;
}

@property (readonly, nonatomic) BOOL supportsARKit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
