@interface FI_TTrackingImageView : FI_TBasicImageView

- (void)updateTrackingAreas;
- (void)startTracking:(id)a0 options:(unsigned long long)a1 userInfo:(id)a2;
- (void)stopTracking:(id)a0;
- (BOOL)isTracking:(id)a0;
- (void)clearTracking;

@end
