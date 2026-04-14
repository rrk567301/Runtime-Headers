@class NSString;

@interface AMSAbsintheSession : NSObject

@property (class, readonly) AMSAbsintheSession *defaultSession;

@property struct PSCSessionInternal_ { } *sessionRef;
@property (retain) NSString *servKey;

- (id)init;
- (void).cxx_destruct;
- (id)signData:(id)a0 bag:(id)a1 error:(id *)a2;
- (BOOL)clearSession;
- (BOOL)verifyData:(id)a0 bag:(id)a1 error:(id *)a2;
- (BOOL)_prepareContextWithBag:(id)a0 error:(id *)a1;

@end
