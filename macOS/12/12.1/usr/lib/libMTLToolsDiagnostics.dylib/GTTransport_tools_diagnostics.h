@class NSString, NSURL, NSError, NSMutableSet, GTIntKeyedDictionary_tools_diagnostics;

@interface GTTransport_tools_diagnostics : NSObject {
    NSURL *_url;
    struct dispatch_queue_s { } *_rootQueue;
    struct dispatch_queue_s { } *_queue;
    struct dispatch_queue_s { } *_sendQueue;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _messageCounter;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _messageSendQueueDepth;
    BOOL _invalid;
    NSMutableSet *_sources;
    GTIntKeyedDictionary_tools_diagnostics *_replyHandlersMap;
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

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)init;
- (void)invalidate;
- (void)_invalidate;
- (void)setTargetQueue:(struct dispatch_queue_s { } *)a0;
- (id)connect;
- (void)_dispatchMessage:(id)a0;
- (long long)_sendMessage:(id)a0 error:(id *)a1;
- (BOOL)send:(id)a0 error:(id *)a1;
- (id)newSourceWithQueue:(struct dispatch_queue_s { } *)a0;
- (BOOL)_activateSource:(id)a0;
- (void)_cancelSource:(id)a0;
- (void)_handleReplyTimeout:(unsigned int)a0 count:(unsigned int)a1;
- (void)_scheduleInvalidation:(id)a0;
- (BOOL)_packMessage:(id)a0 error:(id *)a1;
- (unsigned int)_nextMessageSerial;
- (BOOL)send:(id)a0 inReplyTo:(id)a1 error:(id *)a2 replyQueue:(struct dispatch_queue_s { } *)a3 timeout:(unsigned long long)a4 handler:(id /* block */)a5;
- (BOOL)sendNewMessage:(int)a0 error:(id *)a1 replyQueue:(struct dispatch_queue_s { } *)a2 timeout:(unsigned long long)a3 handler:(id /* block */)a4;
- (BOOL)send:(id)a0 inReplyTo:(id)a1 error:(id *)a2;
- (BOOL)send:(id)a0 error:(id *)a1 replyQueue:(struct dispatch_queue_s { } *)a2 timeout:(unsigned long long)a3 handler:(id /* block */)a4;
- (BOOL)sendNewMessage:(int)a0 error:(id *)a1;
- (BOOL)relayMessage:(id)a0 error:(id *)a1;
- (void)drainQueue;

@end
