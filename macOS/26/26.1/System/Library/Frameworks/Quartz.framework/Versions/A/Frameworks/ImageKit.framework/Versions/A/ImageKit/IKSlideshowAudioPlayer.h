@class NSSound, NSMutableArray;

@interface IKSlideshowAudioPlayer : NSObject {
    NSMutableArray *_urls;
    unsigned long long _currentIndex;
    NSSound *_soundToPlay;
}

- (void)setURL:(id)a0;
- (void)setURLs:(id)a0;
- (void)stopPlaying;
- (id)init;
- (void)play;
- (void)sound:(id)a0 didFinishPlaying:(BOOL)a1;
- (void)startPlaying;

@end
