@class EKEvent;

@interface EKiMIPHandler : NSObject

@property (retain) EKEvent *event;

+ (BOOL)shouldSendEmailForEvent:(id)a0 withDiff:(id)a1;
+ (id)emailsFromAttendees:(id)a0;

- (void).cxx_destruct;
- (id)initWithEvent:(id)a0;
- (id)attendees;
- (id)emailSubject;
- (id)emailBody;
- (id)emailAttachmentName;
- (int)icsMethod;
- (id)attachmentData;
- (BOOL)sendEmail;
- (void)sendEmailFromAddress:(id)a0 toRecipients:(id)a1 withSubject:(id)a2 withBody:(id)a3 withAttachment:(id)a4 attachmentFilename:(id)a5;
- (id)iCalendarDocumentWithMethod:(int)a0;

@end
