@class EKEvent;

@interface EKiMIPHandler : NSObject

@property (retain) EKEvent *event;

+ (id)emailsFromAttendees:(id)a0;
+ (BOOL)shouldSendEmailForEvent:(id)a0 withDiff:(id)a1;

- (void).cxx_destruct;
- (id)initWithEvent:(id)a0;
- (id)attendees;
- (id)attachmentData;
- (id)emailAttachmentName;
- (id)emailBody;
- (id)emailSubject;
- (id)iCalendarDocumentWithMethod:(int)a0;
- (int)icsMethod;
- (BOOL)sendEmail;
- (void)sendEmailFromAddress:(id)a0 toRecipients:(id)a1 withSubject:(id)a2 withBody:(id)a3 withAttachment:(id)a4 attachmentFilename:(id)a5;

@end
