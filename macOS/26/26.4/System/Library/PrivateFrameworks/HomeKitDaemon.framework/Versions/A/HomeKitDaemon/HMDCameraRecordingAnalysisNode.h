@class HMDCameraRecordingAnalysisNodeMetrics, HMDResidentDevice;

@interface HMDCameraRecordingAnalysisNode : HMFObject

@property (readonly, nonatomic) HMDResidentDevice *residentDevice;
@property (readonly, nonatomic) HMDCameraRecordingAnalysisNodeMetrics *metrics;

- (void).cxx_destruct;
- (id)initWithResidentDevice:(id)a0 metrics:(id)a1;

@end
