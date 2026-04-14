@interface CSAttSiriCameraHandler : NSObject

- (id)initWithDelegate:(id)a0;
- (void)gazeTrackerFaceTrackingMetaDataUpdate:(id)a0 atMachAbsTime:(unsigned long long)a1;
- (void)startCamera:(BOOL)a0;
- (void)stopCamera;
- (BOOL)useLegacyGazeModel;

@end
