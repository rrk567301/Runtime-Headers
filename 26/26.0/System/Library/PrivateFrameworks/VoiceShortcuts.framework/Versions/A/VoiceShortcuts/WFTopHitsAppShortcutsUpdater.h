@class SwiftVCDaemonXPCEventHandler, _CDContextualChangeRegistration, _CDClientContext;

@interface WFTopHitsAppShortcutsUpdater : NSObject

@property (retain, nonatomic) SwiftVCDaemonXPCEventHandler *xpcEventHandler;
@property (retain, nonatomic) _CDClientContext *clientContext;
@property (retain, nonatomic) _CDContextualChangeRegistration *changeRegistration;

- (void)start;
- (void)updateWithCompletion:(id /* block */)a0;
- (void)_updateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)applicationRegistered:(id)a0;
- (void)handleFavoriteCallsUpdate;
- (void)handleRecentCallsUpdate;
- (id)initWithXPCEventHandler:(id)a0;
- (void)registerForUpcomingMediaSuggestionChanged;

@end
