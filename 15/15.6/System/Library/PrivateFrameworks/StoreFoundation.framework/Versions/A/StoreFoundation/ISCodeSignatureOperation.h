@class NSString, ISServiceProxy;

@interface ISCodeSignatureOperation : ISOperation

@property (retain) ISServiceProxy *proxy;
@property (retain) NSString *bundlePath;
@property char showProgress;
@property char isDeveloperSigned;
@property char isAppleSigned;

+ (id)operationWithBundlePath:(id)a0 showProgress:(char)a1 storeClient:(id)a2;

- (void).cxx_destruct;
- (void)main;
- (id)initWithBundlePath:(id)a0 showProgress:(char)a1 storeClient:(id)a2;

@end
