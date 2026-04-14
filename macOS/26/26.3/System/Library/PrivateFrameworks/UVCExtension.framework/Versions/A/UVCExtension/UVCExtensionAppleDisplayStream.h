@class NSArray, NSString, NSMutableSet;

@interface UVCExtensionAppleDisplayStream : UVCExtensionAppleStream {
    NSString *_cmioCenterStageActivePropertyDualStreamOnly;
    NSString *_cmioCenterStageEnabledProperty;
    NSString *_cmioCenterStageRectOfInterestProperty;
    NSString *_cmioManualFramingSupportedProperty;
    NSString *_cmioZoomFactorProperty;
    NSString *_cmioStartPanningAtPointProperty;
    NSString *_cmioPanWithTranslationProperty;
    NSString *_cmioCenterStageFramingModeProperty;
    NSString *_cmioZoomFactorConstantsByManualFramingDeviceType;
    NSString *_cmioDeviceHasUltraWideCamera;
    NSString *_cmioManualFramingDeviceTypeProperty;
    BOOL _forceEnableCenterStageAllowed;
    BOOL _forceEnableCenterStageActive;
    NSMutableSet *_forceCenterStageEnabledClientsSigningIdentifiersSet;
    BOOL _centerStageActiveValueDualStreamOnly;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _centerStageRectOfInterest;
    double _zoomFactor;
    struct CGPoint { double x; double y; } _startPanningPoint;
    struct CGPoint { double x; double y; } _panningTranslation;
    struct CGPoint { double x; double y; } _panningAngles;
    unsigned int _centerStageFramingMode;
    BOOL _registeredForChangeInManualFramingControlValues;
    BOOL _observingStreamingClients;
}

@property (readonly, getter=isForceEnableCenterStageAllowed) BOOL forceEnableCenterStageAllowed;
@property (getter=isForceEnableCenterStageActive) BOOL forceEnableCenterStageActive;
@property (readonly) NSArray *forceCenterStageEnabledClientsSigningIdentifiers;

- (void).cxx_destruct;
- (id)availableProperties;
- (void)sendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 discontinuity:(unsigned int)a1 hostTimeInNanoseconds:(unsigned long long)a2;
- (BOOL)startStreamAndReturnError:(id *)a0;
- (BOOL)stopStreamAndReturnError:(id *)a0;
- (void)configureStream;
- (void)_registerForManualFramingControlsChangedNotifications;
- (void)_unregisterForManualFramingControlsChangedNotifications;
- (void)_updateManualFramingStateAndRegisterManualFramingProprietaryDefaultsObservers;
- (void)addSupportedStreamProperties:(id)a0;
- (void)configureStreamStateForStartStreamRequest;
- (void)handleChangedStreamProperties:(id)a0;
- (void)handleTransportLayerAttachmentsFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithDevice:(id)a0 uvcFormats:(id)a1 source:(id)a2 attributes:(id)a3;
- (void)observeValueForKeyPathSync:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)restoreStreamStateOnStopStreamRequest;
- (void)setDefaultStreamPropertyStatesForProperties:(id)a0 validProperties:(id)a1;
- (BOOL)setStreamPropertiesSync:(id)a0 error:(id *)a1;
- (id)streamPropertiesForPropertiesSync:(id)a0 error:(id *)a1;
- (void)terminationReceived;
- (void)trackForceCenterStageEnabledClient:(id)a0;

@end
