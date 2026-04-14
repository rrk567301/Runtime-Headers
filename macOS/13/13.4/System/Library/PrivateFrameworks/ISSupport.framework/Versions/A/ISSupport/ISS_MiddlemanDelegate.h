@class NSLock, NSPortMessage, ISS_MMTransaction;

@interface ISS_MiddlemanDelegate : NSObject <AYNotificationDelegate> {
    ISS_MMTransaction *_my_transaction;
    NSPortMessage *_finishedMsg;
    NSLock *_preHandlerLock;
    BOOL _performedPreHandler;
}

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)_setTransaction:(id)a0;
- (id)_transaction;
- (void)operation:(id)a0 notify:(id)a1;

@end
