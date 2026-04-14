@class NSString;

@interface AASigningSession : NSObject {
    struct NACContextOpaque_ { } *_context;
    NSString *_certURL;
    NSString *_sessionURL;
}

@property (readonly, nonatomic) int error;

+ (id)_badURLError;
+ (id)establishedSessionWithCertURL:(id)a0 sessionURL:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCertURL:(id)a0 sessionURL:(id)a1;
- (id)signatureForData:(id)a0;
- (void)establishSession;

@end
