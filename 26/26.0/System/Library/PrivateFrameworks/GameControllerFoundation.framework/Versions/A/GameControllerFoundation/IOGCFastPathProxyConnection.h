@class NSObject;
@protocol OS_xpc_object;

@interface IOGCFastPathProxyConnection : NSObject {
    NSObject<OS_xpc_object> *_connection;
}

@property (readonly) unsigned int service;
@property (readonly) unsigned long long clientID;

+ (id)connectTo:(unsigned int)a0 withProxyService:(id)a1 error:(int *)a2;

- (void)dealloc;
- (void)invalidate;
- (id)getProperty:(id)a0;
- (id)init;
- (int)open;
- (id)description;
- (int)close;
- (void).cxx_destruct;
- (id)createInputQueueWithOptions:(id)a0 error:(int *)a1;
- (int)mapSharedMemoryAt:(unsigned long long *)a0 ofSize:(unsigned long long *)a1 options:(unsigned int)a2;
- (int)unmapSharedMemoryAt:(unsigned long long)a0;

@end
