@class NSData;

@interface LACContextCredentialCoder : NSObject {
    NSData *_contextRef;
}

+ (BOOL)checkCredentialRequiresEncoding:(long long)a0;

- (void).cxx_destruct;
- (id)initWithExternalizedContextRef:(id)a0;
- (id)decode:(id)a0 seed:(id)a1 error:(id *)a2;
- (id)encode:(id)a0 seed:(id)a1 error:(id *)a2;

@end
