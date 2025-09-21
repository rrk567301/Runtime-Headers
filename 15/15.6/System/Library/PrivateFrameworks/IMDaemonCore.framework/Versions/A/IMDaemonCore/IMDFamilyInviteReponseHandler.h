@interface IMDFamilyInviteReponseHandler : NSObject

- (char)canHandleNotificationResponse:(id)a0 userNotificationCenter:(id)a1;
- (void)handleNotificationResponse:(id)a0 userNotificationCenter:(id)a1 completionHandler:(id /* block */)a2;
- (char)isValidInviteURL:(id)a0;

@end
