@interface TVPAudioSession : NSObject

@property (copy, nonatomic) id /* block */ configurationBlock;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_mediaServicesReset:(id)a0;
- (void)_updateIfNecessary;

@end
