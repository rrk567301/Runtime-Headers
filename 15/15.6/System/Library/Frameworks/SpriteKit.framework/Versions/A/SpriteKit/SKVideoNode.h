@class NSString, AVPlayer, NSURL;

@interface SKVideoNode : SKNode {
    void *_skcVideoNode;
    char _isUsingKVO;
    NSString *_videoFileName;
    NSURL *_videoFileURL;
    AVPlayer *_player;
}

@property (retain, nonatomic) AVPlayer *_player;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) struct CGPoint { double x0; double x1; } anchorPoint;

+ (char)supportsSecureCoding;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)a0 onObject:(id)a1 outOptions:(id *)a2 outError:(id *)a3;
+ (id)videoNodeWithAVPlayer:(id)a0;
+ (id)videoNodeWithFileNamed:(id)a0;
+ (id)videoNodeWithURL:(id)a0;
+ (id)videoNodeWithVideoFileNamed:(id)a0;
+ (id)videoNodeWithVideoURL:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (void)pause;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)accessibilityLabel;
- (void)commonInit;
- (void)play;
- (void)setPaused:(char)a0;
- (char)isEqualToNode:(id)a0;
- (id)initWithFileNamed:(id)a0;
- (id)initWithVideoURL:(id)a0;
- (void)_didMakeBackingNode;
- (void *)_makeBackingNode;
- (id)initWithAVPlayer:(id)a0;
- (id)initWithVideoFileNamed:(id)a0;

@end
