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

- (BOOL)commit;
- (BOOL)send;
- (void)invalidate;
- (BOOL)sendSynchronously;
- (id)initWithMessage:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)commitWithReason:(id)a0;
- (BOOL)appendMessage:(id)a0;
- (BOOL)containsMessage:(SEL)a0;
- (BOOL)didCommit;
- (unsigned long long)messageCount;

@end
