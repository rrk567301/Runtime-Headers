@class NSMutableArray;

@interface CBDigitizerHotspotTTF : CBDigitizerHotspot {
    NSMutableArray *_buffer;
}

@property float touchTriggerBaseDelay;
@property unsigned long long touchBufferPivot;
@property unsigned long long touchBufferMaxCount;
@property float touchBufferWindowS;

- (id)init;
- (id)description;
- (void)dealloc;
- (float)computeBackoff:(float)a0;
- (void)setTouchReleaseTime:(float)a0;

@end
