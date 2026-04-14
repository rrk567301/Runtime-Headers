@class SiriSharedUIViewStackContainer;

@interface SiriSharedUIViewStackContainerController : NSViewController

@property (readonly, nonatomic) SiriSharedUIViewStackContainer *viewStackContainer;

- (void)loadView;

@end
