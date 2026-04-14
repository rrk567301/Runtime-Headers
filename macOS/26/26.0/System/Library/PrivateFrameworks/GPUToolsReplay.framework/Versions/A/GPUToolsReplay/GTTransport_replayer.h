@class NSString, GTIntKeyedDictionary_replayer, NSURL, NSError, NSObject, NSMutableSet;
@protocol OS_dispatch_queue;

@interface GTTransport_replayer : NSObject {
    NSURL *_url;
    NSObject<OS_dispatch_queue> *_rootQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_sendQueue;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _messageCounter;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _messageSendQueueDepth;
    BOOL _invalid;
    NSMutableSet *_sources;
    GTIntKeyedDictionary_replayer *_replyHandlersMap;
    void /* function */ *_dispatch_send;
}

@property (readonly, retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL connected;
@property (readonly, nonatomic) BOOL invalid;
@property (readonly, retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL prioritizeOutgoingMessages;
@property (nonatomic) unsigned int interposerVersion;
@property (nonatomic) BOOL synchronous;

- (id)debugDescription;
- (void)dealloc;
- (void)invalidate;
- (void)_dispatchMessage:(id)a0;
- (void)_invalidate;
- (id)init;
- (id)description;
- (id).cxx_construct;
- (id)connect;
- (void)setTargetQueue:(id)a0;
- (long long)_sendMessage:(id)a0 error:(id *)a1;
- (BOOL)_activateSource:(id)a0;
- (void)_cancelSource:(id)a0;
- (void)_handleReplyTimeout:(unsigned int)a0 count:(unsigned int)a1;
- (unsigned int)_nextMessageSerial;
- (BOOL)_packMessage:(id)a0 error:(id *)a1;
- (void)_scheduleInvalidation:(id)a0;
- (void)drainQueue;
- (id)newSourceWithQueue:(id)a0;
- (BOOL)relayMessage:(id)a0 error:(id *)a1;
- (BOOL)send:(id)a0 error:(id *)a1;
- (BOOL)send:(id)a0 error:(id *)a1 replyQueue:(id)a2 timeout:(unsigned long long)a3 handler:(id /* block */)a4;
- (BOOL)send:(id)a0 inReplyTo:(id)a1 error:(id *)a2;
- (BOOL)send:(id)a0 inReplyTo:(id)a1 error:(id *)a2 replyQueue:(id)a3 timeout:(unsigned long long)a4 handler:(id /* block */)a5;
- (BOOL)sendNewMessage:(int)a0 error:(id *)a1;
- (BOOL)sendNewMessage:(int)a0 error:(id *)a1 replyQueue:(id)a2 timeout:(unsigned long long)a3 handler:(id /* block */)a4;

@end
