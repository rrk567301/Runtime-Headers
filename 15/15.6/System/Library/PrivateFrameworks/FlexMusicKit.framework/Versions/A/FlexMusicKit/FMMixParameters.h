@class NSMutableArray;

@interface FMMixParameters : NSObject

@property (retain, nonatomic) NSMutableArray *volumeKeyFrames;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)appendVolumeKeyframe:(id)a0;
- (void)insertVolumeKeyframe:(id)a0;
- (id)lastVolumeKeyFrame;
- (char)removeRedundantVolumeKeyFrames;
- (char)volumeKeyframesAreValid;
- (float)volumeValueAtTime:(long long)a0;

@end
