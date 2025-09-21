@class NSString, NSDate, NSMutableArray, NSObject;
@protocol OS_xpc_object;

@interface BSXPCServiceConnectionMessageBatch : BSXPCServiceConnectionMessage <BSServiceConnectionMessageBatching> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_xpc_object> *_lock_messages;
    NSMutableArray *_lock_completions;
    NSDate *_date;
}

@property (copy, nonatomic) id /* block */ batchHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (char)commit;
- (id)initWithMessage:(id)a0;
- (char)send;
- (unsigned long long)commitWithReason:(id)a0;
- (char)sendSynchronously;
- (char)appendMessage:(id)a0;
- (char)containsMessage:(SEL)a0;
- (char)didCommit;
- (unsigned long long)messageCount;

@end
