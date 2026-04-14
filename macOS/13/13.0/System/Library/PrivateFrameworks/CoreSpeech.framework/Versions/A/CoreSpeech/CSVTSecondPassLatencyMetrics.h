@interface CSVTSecondPassLatencyMetrics : NSObject

@property (nonatomic) unsigned long long secondPassAssetQueryStartTimeInNs;
@property (nonatomic) unsigned long long secondPassAssetQueryCompleteTimeInNs;
@property (nonatomic) unsigned long long secondPassAssetLoadStartTimeInNs;
@property (nonatomic) unsigned long long secondPassAssetLoadCompleteTimeInNs;
@property (nonatomic) unsigned long long secondPassAudioStreamStartTimeInNs;
@property (nonatomic) unsigned long long secondPassAudioStreamReadyTimeInNs;
@property (nonatomic) unsigned long long secondPassFirstAudioPacketReceptionTimeInNs;
@property (nonatomic) unsigned long long secondPassLastAudioPacketReceptionTimeInNs;
@property (nonatomic) unsigned long long secondPassCheckerModelKeywordDetectionStartTimeInNs;
@property (nonatomic) unsigned long long secondPassCheckerModelKeywordDetectionEndTimeInNs;

@end
