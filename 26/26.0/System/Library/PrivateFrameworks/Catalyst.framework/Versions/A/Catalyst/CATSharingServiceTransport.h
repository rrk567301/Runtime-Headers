@class NSString, NSMutableArray, CATOperationQueue;
@protocol CATSharingConnection;

@interface CATSharingServiceTransport : CATTransport <CATSharingConnectionDelegate> {
    id<CATSharingConnection> mConnection;
    CATOperationQueue *mCatalystQueue;
    NSMutableArray *mReceivedMessages;
    BOOL mIsActive;
    BOOL mIsInvalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateConnection;
- (id)operationToSendMessage:(id)a0;
- (void)resumeConnection;
- (id)initWithConnection:(id)a0;
- (void)suspendConnection;
- (void)invalidateIfNeeded;
- (void)connection:(id)a0 receivedData:(id)a1;
- (void)connectionClosed:(id)a0;
- (void)processReceivedMessages;
- (id)name;
- (void).cxx_destruct;

@end
