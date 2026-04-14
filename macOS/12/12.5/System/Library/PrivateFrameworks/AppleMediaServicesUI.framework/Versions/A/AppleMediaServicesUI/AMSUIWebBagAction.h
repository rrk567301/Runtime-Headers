@class NSString, NSArray;

@interface AMSUIWebBagAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain) NSString *profile;
@property (retain) NSString *profileVersion;
@property (retain) NSArray *requestedKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
