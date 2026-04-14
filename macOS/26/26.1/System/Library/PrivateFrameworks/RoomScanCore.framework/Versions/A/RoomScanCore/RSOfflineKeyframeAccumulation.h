@class RSPointCloud, RSTemporalMeta;

@interface RSOfflineKeyframeAccumulation : NSObject {
    RSPointCloud *_worldpc;
    RSTemporalMeta *_accMeta;
}

- (void).cxx_destruct;
- (id)init;

@end
