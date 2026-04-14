@class RSPointCloud, RSTemporalMeta;

@interface RSOfflineKeyframeAccumulation : NSObject {
    RSPointCloud *_worldpc;
    RSTemporalMeta *_accMeta;
}

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)run:(id)a0;
- (id)pointCloud;
- (id)sortKeyframesByTimestamp:(id)a0;
- (id)temporalMeta;

@end
