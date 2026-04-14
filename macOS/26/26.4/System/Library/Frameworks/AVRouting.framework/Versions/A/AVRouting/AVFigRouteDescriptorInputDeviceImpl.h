@class NSString, AVRoutingWeakReference;
@protocol FigRoutingContextFactory, AVInputDeviceImplSupport;

@interface AVFigRouteDescriptorInputDeviceImpl : NSObject <AVInputDeviceImpl> {
    AVRoutingWeakReference *_weakObserver;
    struct __CFDictionary { } *_routeDescriptor;
    struct OpaqueFigRouteDiscoverer { } *_routeDiscoverer;
    id<FigRoutingContextFactory> _routingContextFactory;
    BOOL _useRouteConfigUpdatedNotification;
    struct OpaqueFigRoutingContext { } *_routingContext;
    struct OpaqueFigReadWriteLock { } *_routeDescriptionRWLock;
}

@property (nonatomic) struct __CFDictionary { } *routeDescriptor;
@property (weak) id<AVInputDeviceImplSupport> implEventListener;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *ID;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) long long deviceSubType;
@property (readonly, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSString *modelID;
@property (readonly, nonatomic, getter=isAppleAccessory) BOOL appleAccessory;
@property (readonly, nonatomic) BOOL supportsFarFieldCapture;
@property (readonly, nonatomic, getter=isFarFieldCaptureEnabled) BOOL farFieldCaptureEnabled;
@property (readonly, nonatomic) BOOL supportsHighQualityContentCapture;
@property (readonly, nonatomic, getter=isHighQualityContentCaptureEnabled) BOOL highQualityContentCaptureEnabled;
@property (readonly, nonatomic) BOOL supportsConversationDetection;
@property (readonly, nonatomic, getter=isConversationDetectionEnabled) BOOL conversationDetectionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_routeDescriptionDidChange:(struct __CFDictionary { } *)a0;
- (unsigned long long)deviceFeatures;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_handleRouteDescriptionEvent:(struct __CFString { } *)a0 payload:(id)a1;
- (int)_withEndpoint:(id /* block */)a0;
- (void)dealloc;
- (id)inputDeviceInfo;
- (id)initWithRouteDescriptor:(struct __CFDictionary { } *)a0 routeDiscoverer:(struct OpaqueFigRouteDiscoverer { } *)a1 routingContextFactory:(id)a2 useRouteConfigUpdatedNotification:(BOOL)a3 routingContext:(struct OpaqueFigRoutingContext { } *)a4;

@end
