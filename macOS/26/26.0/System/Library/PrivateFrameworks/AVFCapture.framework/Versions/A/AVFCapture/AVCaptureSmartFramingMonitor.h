@class NSArray, AVWeakReference, AVCaptureFraming, AVCaptureSmartFraming;

@interface AVCaptureSmartFramingMonitor : NSObject {
    AVWeakReference *_monitorWeakReference;
    AVWeakReference *_deviceWeakReference;
    NSArray *_photoModeFramings;
    NSArray *_photoModeSmartFramings;
    NSArray *_photoModeFieldsOfView;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _framingsLock;
    NSArray *_supportedFramings;
    AVCaptureFraming *_recommendedFraming;
    NSArray *_enabledFramings;
    NSArray *_supportedSmartFramings;
    AVCaptureSmartFraming *_recommendedSmartFraming;
    NSArray *_enabledSmartFramings;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _isMonitoringLock;
    BOOL _isMonitoring;
}

@property (readonly, nonatomic) NSArray *supportedFramings;
@property (copy, nonatomic) NSArray *enabledFramings;
@property (readonly, nonatomic) AVCaptureFraming *recommendedFraming;
@property (readonly, nonatomic, getter=isMonitoring) BOOL monitoring;

+ (void)initialize;

- (id)device;
- (id)debugDescription;
- (void)dealloc;
- (id)description;
- (void)stopMonitoring;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)startMonitoring:(id *)a0;
- (void)_handleChangedActiveFormat:(id)a0;
- (void)_populatePhotoModeSmartFramingsAndFieldsOfViewFromZoomFactorsByFieldOfView:(id)a0;
- (void)_updateFigCaptureSourceEnabledSmartFramingFieldsOfViewForFramings:(id)a0;
- (void)_updateFigCaptureSourceEnabledSmartFramingFieldsOfViewForSmartFramings:(id)a0;
- (id)enabledSmartFramings;
- (id)initWithDevice:(id)a0 smartFramingZoomFactorsByFieldOfView:(id)a1;
- (id)recommendedSmartFraming;
- (void)setEnabledSmartFramings:(id)a0;
- (BOOL)startMonitoringWithError:(id *)a0;
- (id)supportedSmartFramings;
- (void)updateRecommendedSmartFramingWithFieldOfView:(id)a0;

@end
