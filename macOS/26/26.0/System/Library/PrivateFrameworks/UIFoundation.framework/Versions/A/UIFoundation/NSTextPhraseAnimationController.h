@class NSDictionary, NSArray, CADisplayLink;
@protocol NSTextPhraseAttributesProvider;

@interface NSTextPhraseAnimationController : NSObject

@property unsigned long long frameRequestCount;
@property double startTime;
@property double lastFrameTime;
@property long long animationState;
@property (retain) id<NSTextPhraseAttributesProvider> attributesProvider;
@property (copy) NSDictionary *defaultAttributes;
@property (copy) id /* block */ completionHandler;
@property (retain) CADisplayLink *animationDisplayLink;
@property (readonly, copy) NSArray *animatingAttributedStringPhrases;

- (void)start;
- (void)invalidate;
- (long long)version;
- (double)frameRate;
- (void).cxx_destruct;
- (void)drawCurrentFrame;
- (id)initWithAttributedStringPhrases:(id)a0 animationType:(long long)a1 completionHandler:(id /* block */)a2;
- (id)initWithStringPhrases:(id)a0 animationType:(long long)a1 defaultAttributes:(id)a2 completionHandler:(id /* block */)a3;
- (void)_drawCurrentFrame:(id)a0;
- (void)_initWithAttributedStringPhrases:(id)a0 animationType:(long long)a1 completionHandler:(id /* block */)a2;
- (id)initWithDefaultPhrase:(id)a0 animatedPhrases:(id)a1 animationType:(long long)a2 defaultAttributes:(id)a3;
- (void)renderNextFrameUsingHandler:(id /* block */)a0;

@end
