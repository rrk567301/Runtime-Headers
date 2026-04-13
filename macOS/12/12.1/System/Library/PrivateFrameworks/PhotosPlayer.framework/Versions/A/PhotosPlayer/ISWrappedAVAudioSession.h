@class NSString, AVAudioSession;

@interface ISWrappedAVAudioSession : NSObject {
    BOOL _didBeginObservingOutputVolume;
}

@property (class, readonly, nonatomic) ISWrappedAVAudioSession *sharedAmbientInstance;
@property (class, readonly, nonatomic) ISWrappedAVAudioSession *sharedPlaybackInstance;

@property (readonly, nonatomic) AVAudioSession *audioSession;
@property (copy, nonatomic) id /* block */ outputVolumeChangeHandler;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) float outputVolume;

+ (id)auxiliarySession;
+ (void)sharedAmbientInstanceWithLoadHandler:(id /* block */)a0;
+ (void)sharedPlaybackInstanceWithLoadHandler:(id /* block */)a0;
+ (void)sharedPhotosOneUpInstanceWithLoadHandler:(id /* block */)a0;
+ (id)sharedPhotosOneUpInstance;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)setCategory:(id)a0 error:(id *)a1;
- (id)initWithAudioSession:(id)a0;
- (BOOL)setActive:(BOOL)a0 error:(id *)a1;
- (void)_beginObservingOutputVolumeIfNeeded;
- (void)_endObservingOutputVolumeIfNeeded;

@end
