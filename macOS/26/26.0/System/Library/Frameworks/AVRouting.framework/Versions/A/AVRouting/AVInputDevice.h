@class NSString, AVInputDeviceInternal;

@interface AVInputDevice : NSObject {
    AVInputDeviceInternal *_inputDevice;
}

@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) long long deviceSubType;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) BOOL supportsFarFieldCapture;
@property (readonly, nonatomic, getter=isFarFieldCaptureEnabled) BOOL farFieldCaptureEnabled;
@property (readonly, nonatomic) BOOL supportsHighQualityContentCapture;
@property (readonly, nonatomic, getter=isHighQualityContentCaptureEnabled) BOOL highQualityContentCaptureEnabled;

+ (void)initialize;
+ (id)inputDeviceWithRouteDescriptor:(struct __CFDictionary { } *)a0 routeDiscoverer:(struct OpaqueFigRouteDiscoverer { } *)a1;
+ (id)inputDeviceWithRouteDescriptor:(struct __CFDictionary { } *)a0 withRoutingContext:(struct OpaqueFigRoutingContext { } *)a1;

- (id)impl;
- (void)dealloc;
- (id)init;
- (id)description;
- (BOOL)isConversationDetectionEnabled;
- (BOOL)isAppleAccessory;
- (id)initWithInputDeviceImpl:(id)a0;

@end
