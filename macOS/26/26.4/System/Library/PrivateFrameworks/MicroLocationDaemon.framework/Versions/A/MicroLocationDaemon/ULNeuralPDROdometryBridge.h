@interface ULNeuralPDROdometryBridge : ULOdometryBridge

+ (unsigned long long)referenceFrame;
+ (BOOL)isBackgroundAvailable;
+ (BOOL)enableNeuralPDR;
+ (id)getNorthAlignmentAngleRadFrom:(id)a0;
+ (id)northAlignmentErrorFrom:(id)a0;

- (void)stopBackgroundUpdates;
- (long long)odometrySourceType;
- (void)startBackgroundUpdates;

@end
