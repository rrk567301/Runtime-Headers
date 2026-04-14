@interface EKiMIPReply : EKiMIPHandler

+ (BOOL)shouldSendEmailForEvent:(id)a0 withDiff:(id)a1;

- (id)attendees;
- (id)emailSubject;
- (id)emailBody;
- (id)emailAttachmentName;
- (int)icsMethod;

@end
