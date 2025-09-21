@class NSArray, AVMusicTrack, NSDictionary;

@interface AVAudioSequencer : NSObject {
    void *_impl;
}

@property (nonatomic) double currentPositionInSeconds;
@property (nonatomic) double currentPositionInBeats;
@property (readonly, nonatomic, getter=isPlaying) char playing;
@property (nonatomic) float rate;
@property (readonly, nonatomic) NSArray *tracks;
@property (readonly, nonatomic) AVMusicTrack *tempoTrack;
@property (readonly, nonatomic) NSDictionary *userInfo;

- (void)dealloc;
- (id)init;
- (char)startAndReturnError:(id *)a0;
- (void)stop;
- (id)initWithImpl:(void *)a0;
- (void)prepareToPlay;
- (char)removeTrack:(id)a0;
- (void)setupTrackArray;
- (double)beatsForHostTime:(unsigned long long)a0 error:(id *)a1;
- (double)beatsForSeconds:(double)a0;
- (void)cleanTracks;
- (id)createAndAppendTrack;
- (id)dataWithSMPTEResolution:(long long)a0 error:(id *)a1;
- (id)getTempoTrack;
- (unsigned long long)hostTimeForBeats:(double)a0 error:(id *)a1;
- (id)initWithAudioEngine:(id)a0;
- (char)loadFromData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (char)loadFromURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)numberOfTracks;
- (void)reverseEvents;
- (double)secondsForBeats:(double)a0;
- (void)setTempoTrack:(id)a0;
- (void)setTrackArray:(id)a0;
- (void)setUserCallback:(id /* block */)a0;
- (void)setupTracks;
- (id)trackArray;
- (char)writeToURL:(id)a0 SMPTEResolution:(long long)a1 replaceExisting:(char)a2 error:(id *)a3;

@end
