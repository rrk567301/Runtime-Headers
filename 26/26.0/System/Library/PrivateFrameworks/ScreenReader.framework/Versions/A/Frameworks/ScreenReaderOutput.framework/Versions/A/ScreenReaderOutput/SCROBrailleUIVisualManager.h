@protocol SCROBrailleUIAppDelegate;

@interface SCROBrailleUIVisualManager : NSObject

@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, weak, nonatomic) id<SCROBrailleUIAppDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_sendMessage:(id)a0 withIdentifier:(long long)a1;
- (void)cancelVisualSession;
- (void)hideVisual;
- (void)showVisual;
- (void)startVisualSession;
- (void)updateEnabledStatus;
- (void)updateWith:(id)a0;

@end
