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
- (void)invalidateIfNeeded;
- (void)resumeConnection;
- (void)connection:(id)a0 receivedData:(id)a1;
- (void)connectionClosed:(id)a0;
- (void)processReceivedMessages;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (id)operationToSendMessage:(id)a0;
- (void)suspendConnection;

@end
