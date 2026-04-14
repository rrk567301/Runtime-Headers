@class NSMutableArray;

@interface FMMixParameters : NSObject

@property (retain, nonatomic) NSMutableArray *volumeKeyFrames;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)appendVolumeKeyframe:(id)a0;
- (float)volumeValueAtTime:(long long)a0;
- (id)lastVolumeKeyFrame;
- (void)insertVolumeKeyframe:(id)a0;
- (BOOL)volumeKeyframesAreValid;
- (BOOL)removeRedundantVolumeKeyFrames;

@end
