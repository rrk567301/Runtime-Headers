@class NSDictionary, NSHTTPURLResponse;

@interface CKDURLResponseOverrideProxy : NSProxy {
    NSHTTPURLResponse *_realResponse;
    long long _statusCode;
    NSDictionary *_responseHeaderOverrides;
}

- (long long)statusCode;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)valueForHTTPHeaderField:(id)a0;
- (id)allHeaderFields;
- (id)initWithResponse:(id)a0 overrides:(id)a1;

@end
