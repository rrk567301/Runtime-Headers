@class MPPlaybackUserDefaults;

@interface MPCPlaybackDefaultsImplementation : NSObject <MFPlaybackDefaults>

@property (retain, nonatomic) MPPlaybackUserDefaults *userDefaults;
@property (readonly, nonatomic) BOOL shouldPreroll;
@property (readonly, nonatomic) BOOL allowScreenRecording;

- (void).cxx_destruct;
- (id)initWithPlaybackUserDefaults:(id)a0;

@end
