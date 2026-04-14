@class NSDictionary, NSArray, NSString;

@interface AMSUIWebEngagementAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (readonly) NSDictionary *event;
@property (readonly) NSArray *messagePlacements;
@property (readonly) NSString *messageServiceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
