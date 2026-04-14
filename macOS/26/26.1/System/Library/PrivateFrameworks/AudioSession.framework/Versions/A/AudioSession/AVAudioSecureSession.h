@class NSArray, AVAudioSession, NSString;

@interface AVAudioSecureSession : NSObject <AVAudioSecureSessionProtocol>

@property (retain, nonatomic) AVAudioSession *_innerSession;
@property (readonly) NSArray *availableCategories;
@property (readonly) NSArray *availableModes;
@property (readonly) NSString *category;
@property (readonly) NSString *mode;
@property (readonly) double inputSampleRate;
@property (readonly) double IOBufferDuration;
@property (readonly) unsigned long long IOBufferFrameSize;
@property (readonly) double inputLatency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)setActive:(BOOL)a0 error:(id *)a1;
- (id)initWithIsolatedAudioUseCaseID:(unsigned int)a0;
- (BOOL)setCategory:(id)a0 mode:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)initWithUseCaseIdentifier:(unsigned int)a0;
- (BOOL)setCategory:(id)a0 error:(id *)a1;

@end
