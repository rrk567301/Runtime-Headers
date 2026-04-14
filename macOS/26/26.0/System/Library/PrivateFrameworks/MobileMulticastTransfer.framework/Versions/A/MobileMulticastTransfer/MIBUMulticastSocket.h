@class NSDate, NSObject;
@protocol OS_dispatch_queue, MIBUMulticastSocketDelegate, OS_dispatch_source;

@interface MIBUMulticastSocket : NSObject {
    id<MIBUMulticastSocketDelegate> _socketDelegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_dispatchSource;
    int _socketFD;
    NSDate *_lastActivity;
}

- (void)_stop;
- (void)_start;
- (void)start;
- (void)stop;
- (BOOL)isActive;
- (id)description;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;
- (void)_handleReadDispatchSource;
- (void)_handleSourceCancelled;
- (void)_handleWriteDispatchSource;
- (void)_sendPacket:(id)a0 retryCount:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)sendPacket:(id)a0 withCompletion:(id /* block */)a1;

@end
