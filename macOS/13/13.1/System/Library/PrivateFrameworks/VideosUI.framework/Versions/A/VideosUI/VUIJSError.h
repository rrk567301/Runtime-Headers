@class NSError;

@interface VUIJSError : VUIJSObject {
    VUIJSError *_jsUnderlyingError;
}

@property (readonly, nonatomic) NSError *wrappedError;

- (id)description;
- (id)userInfo;
- (id)code;
- (id)domain;
- (void).cxx_destruct;
- (id)failureReason;
- (id)underlyingError;
- (id)initWithError:(id)a0 appContext:(id)a1;
- (id)recoverySuggestion;

@end
