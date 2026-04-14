@interface CalEmail : NSObject

+ (void)sendEmailFromAddress:(id)a0 toRecipients:(id)a1 withSubject:(id)a2 withBody:(id)a3 withAttachment:(id)a4 andAttachmentFilename:(id)a5 delegate:(id)a6;
+ (void)sendEmailTo:(id)a0 withSubject:(id)a1 withBody:(id)a2;
+ (void)sendEmailTo:(id)a0 withSubject:(id)a1 withBody:(id)a2 delegate:(id)a3;
+ (void)sendEmailTo:(id)a0 withSubject:(id)a1 withBody:(id)a2 withAttachment:(id)a3 andAttachmentFilename:(id)a4 delegate:(id)a5;
+ (void)sendEmailTo:(id)a0 withSubject:(id)a1 withBody:(id)a2 withAttachment:(id)a3 andAttachmentFilename:(id)a4;

@end
