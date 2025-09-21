@class NSString, AMSPromiseSerialQueue;

@interface AMSAbsintheSession : NSObject

@property (class, readonly) AMSAbsintheSession *defaultSession;

@property (readonly, nonatomic) AMSPromiseSerialQueue *queue;
@property (nonatomic) void *sessionRef;
@property (copy, nonatomic) NSString *servKey;

- (id)init;
- (void).cxx_destruct;
- (id)_prepareContextWithBag:(id)a0;
- (id)asynchronouslyClearSession;
- (char)clearSession;
- (id)signData:(id)a0 bag:(id)a1;
- (id)signData:(id)a0 bag:(id)a1 error:(id *)a2;
- (char)verifyData:(id)a0 bag:(id)a1 error:(id *)a2;

@end
