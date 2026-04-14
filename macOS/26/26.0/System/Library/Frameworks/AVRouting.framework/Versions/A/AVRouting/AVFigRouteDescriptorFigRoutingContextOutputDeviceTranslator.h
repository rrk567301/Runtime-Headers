@class NSString;

@interface AVFigRouteDescriptorFigRoutingContextOutputDeviceTranslator : NSObject <AVFigRoutingContextOutputDeviceTranslator> {
    BOOL _useRouteConfigUpdatedNotification;
    BOOL _useRoutingContextCallbacks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedOutputDeviceTranslator;

- (id)initForUsingRouteConfigUpdatedNotification:(BOOL)a0;
- (void)dealloc;
- (void)removeOutputDevice:(id)a0 withOptions:(struct __CFDictionary { } *)a1 fromRoutingContext:(struct OpaqueFigRoutingContext { } *)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (id)outputDeviceFromRoutingContext:(struct OpaqueFigRoutingContext { } *)a0;
- (id)outputDevicesFromRoutingContext:(struct OpaqueFigRoutingContext { } *)a0;
- (void)setOutputDevices:(id)a0 withOptions:(struct __CFDictionary { } *)a1 onRoutingContext:(struct OpaqueFigRoutingContext { } *)a2 completionHandler:(id /* block */)a3;
- (id)predictedOutputDeviceFromRoutingContext:(struct OpaqueFigRoutingContext { } *)a0;
- (void)setOutputDevice:(id)a0 withOptions:(struct __CFDictionary { } *)a1 onRoutingContext:(struct OpaqueFigRoutingContext { } *)a2 completionHandler:(id /* block */)a3;
- (void)addOutputDevice:(id)a0 withOptions:(struct __CFDictionary { } *)a1 toRoutingContext:(struct OpaqueFigRoutingContext { } *)a2 completionHandler:(id /* block */)a3;

@end
