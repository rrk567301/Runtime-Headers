@class NSString;

@interface CALURLPublisher : CALRemotePublisher {
    NSString *_password;
    BOOL _useCompatibilityMode;
    BOOL _checkCompatibilityMode;
}

+ (void)initialize;
+ (id)errorForUnpublishOperation:(id)a0;
+ (void)_bootstrapCALURLPublishOperationFactory;
+ (void)registerPublishOperation:(Class)a0 priority:(unsigned int)a1;
+ (void)guessLoginPasswordForURL:(id)a0 login:(id *)a1 password:(id *)a2;
+ (BOOL)onlySupportsWebDAV;

- (id)init;
- (void).cxx_destruct;
- (id)password;
- (id)dictionaryRepresentation;
- (void)setPassword:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)setUsername:(id)a0;
- (void)setUploadURL:(id)a0;
- (id)remoteOperation;
- (void)commonOperationDone:(id)a0;
- (id)getKeychainURL;
- (id)remoteOperationForURL:(id)a0;
- (void)saveKeychainInformations;
- (void)loadKeychainInformations;

@end
