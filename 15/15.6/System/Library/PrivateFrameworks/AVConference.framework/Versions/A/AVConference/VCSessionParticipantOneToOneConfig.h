@class AVCRateControlFeedbackController, AVCStatisticsCollector, AVCBasebandCongestionDetector, VCNetworkFeedbackController, VCRateControlMediaController;

@interface VCSessionParticipantOneToOneConfig : VCObject

@property (nonatomic) int deviceRole;
@property (nonatomic) unsigned long long idsParticipantID;
@property (retain, nonatomic) AVCRateControlFeedbackController *feedbackController;
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector;
@property (retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector;
@property (nonatomic) void *audioMediaControlInfoGenerator;
@property (nonatomic) void *videoMediaControlInfoGenerator;
@property (retain, nonatomic) VCRateControlMediaController *mediaController;
@property (nonatomic) struct tagHANDLE { int x0; } *mediaQueue;
@property (nonatomic) struct tagVCMediaQueue { } *vcMediaQueue;
@property (nonatomic) char negotiatedVideoEnabled;
@property (nonatomic) char negotiatedScreenEnabled;
@property (nonatomic) char initUsingWifiTiers;
@property (retain, nonatomic) VCNetworkFeedbackController *networkFeedbackController;
@property (nonatomic) int operatingMode;

- (void)dealloc;
- (id)init;

@end
