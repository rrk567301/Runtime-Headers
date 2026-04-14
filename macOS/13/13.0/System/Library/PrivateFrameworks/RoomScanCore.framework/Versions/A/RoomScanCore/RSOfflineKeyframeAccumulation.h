@class RSPointCloud, RSTemporalMeta;

@interface RSOfflineKeyframeAccumulation : NSObject {
    RSPointCloud *_worldpc;
    RSTemporalMeta *_accMeta;
}

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)run:(id)a0;
- (id)sortKeyframesByTimestamp:(id)a0;
- (id)pointCloud;
- (id)temporalMeta;

@end
