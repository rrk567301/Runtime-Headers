@class NSString;

@interface AMSAbsintheSession : NSObject

@property (class, readonly) AMSAbsintheSession *defaultSession;

@property struct PSCSessionInternal_ { } *sessionRef;
@property (retain) NSString *servKey;
@property void /* function */ *PSCHelloV4Override;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_prepareContextWithBag:(id)a0 error:(id *)a1;
- (BOOL)clearSession;
- (id)signData:(id)a0 bag:(id)a1 error:(id *)a2;
- (BOOL)verifyData:(id)a0 bag:(id)a1 error:(id *)a2;

@end
