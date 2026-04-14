@class NSArray;

@interface ICDisplayLink : NSObject

@property (nonatomic) struct __CVDisplayLink { } *displayLink;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (copy, nonatomic) NSArray *displays;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void)schedule;
- (void)displayLinkAction;

@end
