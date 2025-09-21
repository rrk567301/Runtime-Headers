@class NSUUID, CATTaskRequest;
@protocol CATTaskOperationNotificationDelegate;

@interface CATTaskOperation : CATOperation

@property (copy, nonatomic) NSUUID *remoteUUID;
@property (readonly, nonatomic) CATTaskRequest *request;
@property (weak, nonatomic) id<CATTaskOperationNotificationDelegate> notificationDelegate;

+ (id)new;
+ (char)isCancelable;
+ (char)validateRequest:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)initWithRequest:(id)a0;
- (void)processMessage:(id)a0;
- (char)canSendNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)cat_addAssertion:(id)a0;
- (id)cat_assertions;
- (void)postNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)processNotificationWithName:(id)a0 userInfo:(id)a1;

@end
