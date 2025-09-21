@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface CMCaptureFrameSenderClient : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) char connectionIsValid;
@property (readonly) int pid;

- (void)dealloc;
- (void)_invalidate;
- (id)initWithConnection:(id)a0 queue:(id)a1;
- (int)sendXCPSampleBuffer:(id)a0;

@end
