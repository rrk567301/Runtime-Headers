@class NSDictionary, NSHTTPURLResponse;

@interface CKDURLResponseOverrideProxy : NSProxy {
    NSHTTPURLResponse *_realResponse;
    long long _statusCode;
    NSDictionary *_responseHeaderOverrides;
}

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)valueForHTTPHeaderField:(id)a0;
- (long long)statusCode;
- (void).cxx_destruct;
- (id)allHeaderFields;
- (id)initWithResponse:(id)a0 overrides:(id)a1;

@end
