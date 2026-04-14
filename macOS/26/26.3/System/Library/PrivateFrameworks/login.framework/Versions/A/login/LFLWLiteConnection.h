@class LFNotify;

@interface LFLWLiteConnection : LFConnection

@property (retain) LFNotify *notify;

- (id)initWithListenerEndpoint:(id)a0;
- (id)initWithMachServiceName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
