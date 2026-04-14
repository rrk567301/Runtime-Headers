@class NSString, NSXPCConnection, APXPCActivityCriteria, NSObject;
@protocol OS_os_transaction;

@interface APAESProcessingActivity : NSObject <APXPCActivityDelegate>

@property (retain, nonatomic) NSXPCConnection *serviceConnection;
@property (retain, nonatomic) NSObject<OS_os_transaction> *osTransaction;
@property (readonly, nonatomic) NSString *taskID;
@property (readonly, nonatomic) APXPCActivityCriteria *criteria;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
