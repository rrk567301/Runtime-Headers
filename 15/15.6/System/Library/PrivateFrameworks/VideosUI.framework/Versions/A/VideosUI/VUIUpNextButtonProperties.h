@class VUIUpNextStateView, NSView, NSString;
@protocol VUIUpNextButtonProtocol;

@interface VUIUpNextButtonProperties : NSObject

@property (readonly, nonatomic) VUIUpNextStateView *addedStateView;
@property (readonly, nonatomic) VUIUpNextStateView *removedStateView;
@property (retain, nonatomic) NSView *currentImageView;
@property (weak, nonatomic) NSView<VUIUpNextButtonProtocol> *delegate;
@property (retain, nonatomic) NSString *canonicalID;
@property (nonatomic) char isWatchListed;
@property (nonatomic) char dismissOnSelect;
@property (nonatomic) char confirmationShouldWaitCompletion;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeNotificationObserver;
- (void)_updatingState:(id)a0;
- (void)_handleClearFromPlayHistoryNotification:(id)a0;
- (void)_toggleUpNextState;
- (void)callAPIAndToggleUpNextState;
- (void)setupNotificationObserver;
- (void)updateButtonContentView;

@end
