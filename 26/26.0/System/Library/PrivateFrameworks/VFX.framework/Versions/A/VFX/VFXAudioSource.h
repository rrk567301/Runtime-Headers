@class AVAudioFile, NSString, NSURL, AVAudioPCMBuffer;

@interface VFXAudioSource : NSObject <NSCopying, NSSecureCoding> {
    AVAudioFile *_audioFile;
    AVAudioPCMBuffer *_audioBuffer;
    NSURL *_audioURL;
    NSString *_audioName;
    BOOL _loaded;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isPositional) BOOL positional;
@property (nonatomic) float volume;
@property (nonatomic) float rate;
@property (nonatomic) float reverbBlend;
@property (nonatomic) BOOL loops;
@property (nonatomic) BOOL shouldStream;

+ (id)audioSourceNamed:(id)a0;
+ (id)audioSourceWithAVAudioPCMBuffer:(id)a0;

- (void)_load;
- (void)load;
- (id)fileName;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)initWithURL:(id)a0;
- (long long)renderingAlgorithm;
- (id)initWithCoder:(id)a0;
- (double)duration;
- (id)audioFile;
- (id)audioBuffer;
- (void)loadIfNeeded;
- (void)_loadURLWithBundle:(id)a0;
- (id)audioBufferFormat;
- (id)initWithAVAudioPCMBuffer:(id)a0;
- (id)initWithFileNamed:(id)a0;
- (id)initWithFileNamed:(id)a0 inBundle:(id)a1;
- (void)_customDecodingOfVFXAudioSource:(id)a0;
- (void)_customEncodingOfVFXAudioSource:(id)a0;

@end
