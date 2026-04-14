@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface CMCaptureFrameSenderClient : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) BOOL connectionIsValid;
@property (readonly) int pid;

- (id)initWithConnection:(id)a0 queue:(id)a1;
- (void)_invalidate;
- (void)dealloc;
- (int)sendXCPSampleBuffer:(id)a0;

@end
