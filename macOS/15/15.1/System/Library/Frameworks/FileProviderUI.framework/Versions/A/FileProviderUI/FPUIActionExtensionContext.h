@class NSString, NSURL, NSError;

@interface FPUIActionExtensionContext : NSExtensionContext

@property (copy) NSString *domainIdentifier;
@property (copy) NSURL *initialURL;
@property (retain, nonatomic) NSError *setupError;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)cancelRequestWithError:(id)a0;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)_remoteContext;
- (void)completeRequest;
- (void)completeRequestWithUserInfo:(id)a0;
- (void)didEncounterError:(id)a0 completionHandler:(id /* block */)a1;

@end
