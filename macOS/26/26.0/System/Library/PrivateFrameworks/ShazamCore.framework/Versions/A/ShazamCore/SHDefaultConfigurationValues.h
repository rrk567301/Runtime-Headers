@class NSDictionary, NSString;

@interface SHDefaultConfigurationValues : NSObject

@property (readonly) NSDictionary *defaultValues;
@property (readonly) double recordingIntermission;
@property (readonly) double liveAudioMinimumRecordingDuration;
@property (readonly, copy) NSString *campaignGroup;
@property (readonly) long long lookupBatchSize;
@property (readonly, copy) NSString *providerToken;
@property (readonly, copy) NSString *sportsCampaignToken;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
