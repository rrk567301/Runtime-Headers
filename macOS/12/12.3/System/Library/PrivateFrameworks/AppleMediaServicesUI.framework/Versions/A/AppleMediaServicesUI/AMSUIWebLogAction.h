@class NSString;

@interface AMSUIWebLogAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property long long level;
@property (retain) NSString *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
