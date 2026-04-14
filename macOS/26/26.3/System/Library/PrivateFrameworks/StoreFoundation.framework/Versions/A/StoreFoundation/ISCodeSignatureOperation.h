@class NSString, ISServiceProxy;

@interface ISCodeSignatureOperation : ISOperation

@property (retain) ISServiceProxy *proxy;
@property (retain) NSString *bundlePath;
@property BOOL showProgress;
@property BOOL isDeveloperSigned;
@property BOOL isAppleSigned;

+ (id)operationWithBundlePath:(id)a0 showProgress:(BOOL)a1 storeClient:(id)a2;

- (void)main;
- (void).cxx_destruct;
- (id)initWithBundlePath:(id)a0 showProgress:(BOOL)a1 storeClient:(id)a2;

@end
