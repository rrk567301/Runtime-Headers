@class NSString, NSDictionary, NSURL, NSData, NSArray, AVAudioFormat;
@protocol AVAudioPlayerDelegate;

@interface AVAudioPlayer : NSObject {
    id _impl;
}

@property (readonly, getter=isPlaying) char playing;
@property (readonly) unsigned long long numberOfChannels;
@property (readonly) double duration;
@property (copy) NSString *currentDevice;
@property (weak) id<AVAudioPlayerDelegate> delegate;
@property (readonly) NSURL *url;
@property (readonly) NSData *data;
@property float pan;
@property float volume;
@property char enableRate;
@property float rate;
@property double currentTime;
@property (readonly) double deviceCurrentTime;
@property long long numberOfLoops;
@property (readonly) NSDictionary *settings;
@property (readonly) AVAudioFormat *format;
@property (getter=isMeteringEnabled) char meteringEnabled;
@property (copy, nonatomic) NSArray *channelAssignments;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void)pause;
- (void)stop;
- (id)impl;
- (id)initWithData:(id)a0 fileTypeHint:(id)a1 error:(id *)a2;
- (char)play;
- (id)initWithData:(id)a0 error:(id *)a1;
- (char)prepareToPlay;
- (id)STSLabel;
- (void)setSTSLabel:(id)a0;
- (float)averagePowerForChannel:(unsigned long long)a0;
- (float)peakPowerForChannel:(unsigned long long)a0;
- (void)setVolume:(float)a0 fadeDuration:(double)a1;
- (void)updateMeters;
- (id)initBase;
- (char)playAtTime:(double)a0;
- (void)setMixToUplink:(char)a0;
- (void)decodeError:(id)a0;
- (void)finishedPlaying:(id)a0;
- (id)initWithContentsOfURL:(id)a0 fileTypeHint:(id)a1 error:(id *)a2;
- (char)mixToUplink;
- (void)privRemoveSessionListener;

@end
