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

- (void)resumeConnection;
- (void)invalidateIfNeeded;
- (void)invalidateConnection;
- (void)processReceivedMessages;
- (void)suspendConnection;
- (id)initWithConnection:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (id)operationToSendMessage:(id)a0;
- (void)connectionClosed:(id)a0;
- (void)connection:(id)a0 receivedData:(id)a1;

@end
