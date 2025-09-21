@class AVAudioNode;

@interface SKAudioNode : SKNode <NSSecureCoding> {
    void *_skcAudioNode;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) AVAudioNode *avAudioNode;
@property (nonatomic) char autoplayLooped;
@property (nonatomic, getter=isPositional) char positional;

+ (id)_audioURLWithName:(id)a0 bundle:(id)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (void)commonInit;
- (id)audioFile;
- (id)audioURL;
- (char)isEqualToNode:(id)a0;
- (id)initWithAVAudioNode:(id)a0;
- (id)initWithFileNamed:(id)a0;
- (id)audioFileName;
- (void)setAudioFileName:(id)a0;
- (void)setAudioURL:(id)a0;
- (void)_connectToScene:(id)a0;
- (void)_didMakeBackingNode;
- (void *)_makeBackingNode;
- (void)_playLooped;
- (void)_setAudioName:(id)a0 bundle:(id)a1;
- (id)initWithFileNamed:(id)a0 bundle:(id)a1;

@end
