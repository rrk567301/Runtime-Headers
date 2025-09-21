@class NSError;

@interface VUIJSError : VUIJSObject {
    VUIJSError *_jsUnderlyingError;
}

@property (readonly, nonatomic) NSError *wrappedError;

- (id)domain;
- (id)code;
- (id)failureReason;
- (id)description;
- (id)userInfo;
- (void).cxx_destruct;
- (id)underlyingError;
- (id)initWithError:(id)a0 appContext:(id)a1;
- (id)recoverySuggestion;

@end
