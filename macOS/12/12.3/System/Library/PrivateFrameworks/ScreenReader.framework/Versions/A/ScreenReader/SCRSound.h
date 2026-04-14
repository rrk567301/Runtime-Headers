@class NSString, NSURL, NSData;

@interface SCRSound : SCROutputSound {
    struct nssound_info { struct OpaqueAudioConverter *x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1; struct ComponentInstanceRecord *x2; struct OpaqueAudioFileID *x3; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x4; long long x5; unsigned long long x6; unsigned int x7; struct AudioStreamPacketDescription *x8; } *_info;
}

@property (class, nonatomic) BOOL shouldShortCircuitSoundOutput;

@property (nonatomic) double audioDuration;
@property (nonatomic, setter=_setAudioFile:) struct OpaqueAudioFileID { } *_audioFile;
@property (copy, nonatomic, setter=_setSoundName:) NSString *_soundName;
@property (copy, nonatomic, setter=_setSoundURL:) NSURL *_soundURL;
@property (copy, nonatomic, setter=_setSoundData:) NSData *_soundData;
@property (nonatomic, setter=_setSoundFlags:) unsigned int _soundFlags;
@property (nonatomic, setter=_setCompletionCallbackNeedsSending:) BOOL _completionCallbackNeedsSending;
@property (nonatomic) unsigned long long soundID;
@property (nonatomic) int busID;
@property (nonatomic) float volume;
@property (nonatomic) BOOL ensureSingleCompletionCallbacks;

+ (void)initialize;
+ (void)_unregisterSound:(id)a0;
+ (void)_registerSound:(id)a0;
+ (id)_soundForID:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)stop;
- (BOOL)play;
- (BOOL)isPlaying;
- (id)_initWithContentsOfURL:(id)a0;
- (BOOL)stopImmediately;
- (void)_postInitialization;
- (void)_audioCompletedCleanup:(struct __CFBoolean { } *)a0;
- (void)_informDelegateOfCompletionIfNeeded:(BOOL)a0;
- (BOOL)_audioFailed:(id)a0;
- (void)_audioSchedulingComplete;
- (void)audioCompletedCleanup;
- (id)_initWithContentsOfFile:(id)a0;

@end
