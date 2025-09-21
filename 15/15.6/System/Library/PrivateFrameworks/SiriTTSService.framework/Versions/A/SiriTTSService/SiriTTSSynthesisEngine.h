@class NSLock, NSNumber, NSString;

@interface SiriTTSSynthesisEngine : NSObject

@property (nonatomic) void *synthesizer;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSNumber *supportWordTimingCachedValue;
@property (retain, nonatomic) NSNumber *supportPhaticResponseCachedValue;
@property (readonly, nonatomic) NSString *voicePath;
@property (readonly, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) char supportWordTiming;
@property (readonly, nonatomic) char supportPhaticResponse;
@property (retain, nonatomic) NSString *tag;

+ (char)hasPhaticResponsesWithVoicePath:(id)a0;
+ (char)hasWordTimingSupportWithVoicePath:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (char)preheatWithError:(id *)a0;
- (void)stopSynthesis;
- (void)unloadResource:(id)a0;
- (char)_preheatWithError:(id *)a0;
- (char)_unlockedLoadResourceWithPath:(id)a0 error:(id *)a1;
- (char)_unlockedSynthesize:(id)a0 error:(id *)a1;
- (void)_unlockedUnloadResource:(id)a0;
- (id)initWithVoicePath:(id)a0 resourcePath:(id)a1 error:(id *)a2;
- (char)loadResourceWithPath:(id)a0 error:(id *)a1;
- (char)synthesize:(id)a0 error:(id *)a1;

@end
