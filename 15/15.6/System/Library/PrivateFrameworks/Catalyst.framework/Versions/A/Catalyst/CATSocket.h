@class CATEndPoint, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, CATSocketDelegate;

@interface CATSocket : NSObject {
    char mIsInvalid;
    int mState;
}

@property (nonatomic) int nativeSocket;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *socketSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *socketQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *userQueue;
@property (weak, nonatomic) id<CATSocketDelegate> delegate;
@property (readonly, nonatomic) CATEndPoint *localEndPoint;
@property (readonly, nonatomic) CATEndPoint *remoteEndPoint;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (void)suspend;
- (void)socketDidCancel;
- (void)acceptPendingConnection;
- (char)connectToEndPoint:(id)a0 error:(id *)a1;
- (void)delegateDidClose;
- (void)delegateDidConnect;
- (void)delegateDidFailWithError:(id)a0;
- (void)delegateDidReceiveData:(id)a0;
- (char)delegateShouldAcceptNewSocket:(id)a0;
- (id)initWithNativeSocket:(int)a0;
- (char)listenWithEndPoint:(id)a0 error:(id *)a1;
- (void)populateLocalEndPoint;
- (void)populateRemoteEndPoint;
- (void)socketDidConnect;
- (void)socketDidFailWithError:(id)a0;
- (void)socketDidReceiveData;
- (void)socketDidReceiveEvent;
- (void)socketDidReceiveListeningEvent;

@end
