@class LFNotify;

@interface LFLWLiteConnection : LFConnection

@property (retain) LFNotify *notify;

- (id)initWithListenerEndpoint:(id)a0;
- (id)initWithMachServiceName:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
