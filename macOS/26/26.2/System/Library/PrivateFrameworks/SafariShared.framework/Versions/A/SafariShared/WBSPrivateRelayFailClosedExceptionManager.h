@class NSMutableSet;

@interface WBSPrivateRelayFailClosedExceptionManager : NSObject {
    NSMutableSet *_privateRelayFailClosedExceptions;
    NSMutableSet *_clearedExceptionsForBrowsingSession;
}

@property (class, readonly, nonatomic) WBSPrivateRelayFailClosedExceptionManager *sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)clearPrivateRelayFailClosedExceptionIfNecessaryForURL:(id)a0;
- (void)rememberPrivateRelayFailClosedExceptionForURL:(id)a0;
- (BOOL)shouldPrivateRelayFailClosedExceptionApplyForURL:(id)a0;
- (BOOL)wasExceptionClearedForCurrentBrowsingSession:(id)a0;

@end
