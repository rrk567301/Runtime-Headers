@interface ICBackgroundTranscriptionHelper : NSObject

+ (id)sharedInstance;

- (void)addFirstTimeTranscriptionTaskToQueue:(id)a0 attachmentIdentifier:(id)a1 subattachmentIdentifier:(id)a2;
- (void)addRetranscriptionTaskToQueue:(id)a0 attachmentIdentifier:(id)a1;

@end
