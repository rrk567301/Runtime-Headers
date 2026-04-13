@class MicrophoneSelectingModuleUtil, NSArray, NSString;
@protocol AVAudioMicrophoneConfiguration;

@interface MicrophoneSelectingModuleSimulate : NSObject <AVAudioMicrophoneSelecting>

@property (retain, nonatomic) MicrophoneSelectingModuleUtil *databaseUtil;
@property (readonly, nonatomic) NSArray *availableConfigurations;
@property (readonly, nonatomic) id<AVAudioMicrophoneConfiguration> selectedConfiguration;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
