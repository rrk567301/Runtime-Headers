@class CATOperationQueue, CATSharingDevice, NSString, NSError;
@protocol CATSharingDeviceSession, CATTimerSource, CATTimer, CATSharingConnectionDelegate;

@interface CATSharingDeviceSessionConnection : NSObject <CATSharingConnection> {
    id<CATSharingDeviceSession> mDeviceSession;
    id<CATTimerSource> mTimerSource;
    char mIsClosing;
    id<CATTimer> mTombstoneTimer;
    CATOperationQueue *mOutgoingQueue;
    CATOperationQueue *mCatalystQueue;
}

@property (nonatomic, getter=isClosed) char closed;
@property (retain, nonatomic) NSError *closedError;
@property (readonly, nonatomic) CATSharingDevice *remoteDevice;
@property (weak, nonatomic) id<CATSharingConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)close;
- (void)_close;
- (void)sendData:(id)a0 completion:(id /* block */)a1;
- (void)sendMessage:(id)a0 completion:(id /* block */)a1;
- (void)_sendData:(id)a0 completion:(id /* block */)a1;
- (void)addDeviceSessionHandlers;
- (void)closeWithError:(id)a0 reportToRemote:(char)a1;
- (void)didReceiveMessage:(id)a0;
- (void)handleCloseMessage:(id)a0;
- (void)handleSentMessage:(id)a0;
- (void)handleUnparsableMessageDictionary:(id)a0;
- (id)initWithDeviceSession:(id)a0 timerSource:(id)a1;
- (void)removeDeviceSessionHandlers;
- (void)sendTearDownMessageWithError:(id)a0;
- (void)tombstoneWithError:(id)a0;

@end
