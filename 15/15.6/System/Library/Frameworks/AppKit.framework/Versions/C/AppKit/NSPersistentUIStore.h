@class NSURL;

@interface NSPersistentUIStore : NSObject

@property (class, readonly, copy) NSURL *serviceContainerURL;
@property (class, readonly) char useRemoteStore;

+ (id)defaultStoreWithBundleIdentifier:(id)a0;
+ (id)remoteStore;

@end
