@class NSString, NSMutableArray, NSExtension;
@protocol NSCopying;

@interface STWebRemoteViewController : NSRemoteViewController <STWebServiceDelegate>

@property (class, readonly) NSMutableArray *sharedCache;

@property BOOL URLIsBlocked;
@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id<NSCopying> extensionRequestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (void)cacheWebViewController:(id)a0;
+ (id)dequeueWebViewController;
+ (void)instantiateWebViewControllerWithConnectionHandler:(id /* block */)a0;

@end
