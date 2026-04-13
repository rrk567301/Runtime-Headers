@class AMSBagKeySet, NSString;

@interface APAMSClientBagManager : NSObject <AMSBagConsumer>

@property (class, readonly) AMSBagKeySet *bagKeySet;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adprivacydBag;
+ (BOOL)isSubsequentAdsFetchDisabled;
+ (void)isSubsequentAdsFetchDisabled:(id)a0 withCompletionHandler:(id /* block */)a1;


@end
