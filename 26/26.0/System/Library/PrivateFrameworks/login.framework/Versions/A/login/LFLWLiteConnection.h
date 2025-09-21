@class LFNotify;

@interface LFLWLiteConnection : LFConnection

@property (retain) LFNotify *notify;

- (id)initWithMachServiceName:(id)a0;
- (void)dealloc;
- (id)initWithListenerEndpoint:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
