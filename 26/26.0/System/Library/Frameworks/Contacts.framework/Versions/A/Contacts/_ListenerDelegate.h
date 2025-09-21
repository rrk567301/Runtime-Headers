@class NSString, NSObject;
@protocol CNContactsAPIServiceAuthorizationCheck, OS_dispatch_queue, CNContactPosterDataService;

@interface _ListenerDelegate : NSObject <NSXPCListenerDelegate>

@property (readonly) id<CNContactPosterDataService> service;
@property (readonly) id<CNContactsAPIServiceAuthorizationCheck> serviceAuthorizationCheck;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
