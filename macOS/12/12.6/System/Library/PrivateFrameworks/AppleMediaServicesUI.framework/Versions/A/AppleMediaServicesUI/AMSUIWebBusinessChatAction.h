@class NSString;

@interface AMSUIWebBusinessChatAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain) NSString *body;
@property (retain) NSString *businessID;
@property (retain) NSString *businessGroupID;
@property (retain) NSString *intentID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
