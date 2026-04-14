@class NSUUID, CATTaskRequest;
@protocol CATTaskOperationNotificationDelegate;

@interface CATTaskOperation : CATOperation

@property (copy, nonatomic) NSUUID *remoteUUID;
@property (readonly, nonatomic) CATTaskRequest *request;
@property (weak, nonatomic) id<CATTaskOperationNotificationDelegate> notificationDelegate;

+ (BOOL)isCancelable;
+ (id)new;
+ (BOOL)validateRequest:(id)a0 error:(id *)a1;

- (id)cat_assertions;
- (void)processNotificationWithName:(id)a0 userInfo:(id)a1;
- (id)initWithRequest:(id)a0;
- (BOOL)canSendNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)cat_addAssertion:(id)a0;
- (void)main;
- (void)processMessage:(id)a0;
- (void)postNotificationWithName:(id)a0 userInfo:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
