@class FaceCoreDetector, NSDictionary;

@interface VNObjectTrackerLegacyFaceCore : VNTracker {
    FaceCoreDetector *_detector;
    NSDictionary *_detectOptions;
    NSDictionary *_extractOptions;
}

+ (id)_convertOptionsToFaceCoreDetectOptions:(id)a0;
+ (id)_convertOptionsToFaceCoreExtractOptions:(id)a0;
+ (id)_convertOptionsToFaceCoreSetupOptions:(id)a0;
+ (id)supportedComputeDevicesForOptions:(id)a0 error:(id *)a1;
+ (Class)trackerObservationClass;

- (void).cxx_destruct;
- (char)reset:(id *)a0;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)_detectFacesInImage:(id)a0 error:(id *)a1;
- (char)isResettable;
- (id)setTrackedObjects:(id)a0 inFrame:(id)a1 error:(id *)a2;
- (id)trackInFrame:(id)a0 error:(id *)a1;

@end
