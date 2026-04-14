@class VUIUpNextStateView, NSView, NSString;
@protocol VUIUpNextButtonProtocol;

@interface VUIUpNextButtonProperties : NSObject

@property (readonly, nonatomic) VUIUpNextStateView *addedStateView;
@property (readonly, nonatomic) VUIUpNextStateView *removedStateView;
@property (weak, nonatomic) NSView<VUIUpNextButtonProtocol> *delegate;
@property (retain, nonatomic) NSString *canonicalID;
@property (nonatomic) BOOL isWatchListed;
@property (nonatomic) BOOL dismissOnSelect;
@property (nonatomic) BOOL confirmationShouldWaitCompletion;
@property (nonatomic) BOOL hasUpdated;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeNotificationObserver;
- (void)callAPIAndToggleUpNextState;
- (void)_errorInUpdatingState:(id)a0;
- (void)updateButtonContentView;
- (void)_toggleUpNextState;
- (void)setupNotificationObserver;

@end
