@interface TVPAudioSession : NSObject

@property (copy, nonatomic) id /* block */ configurationBlock;

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)_updateIfNecessary;
- (void)_mediaServicesReset:(id)a0;

@end
