@interface ICBackgroundTranscriber : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ _currentlyTranscribingAttachment;
    void /* unknown type, empty encoding */ _downloadingModel;
    void /* unknown type, empty encoding */ failedAttachments;
    void /* unknown type, empty encoding */ workerContext;
}

@property (class, nonatomic, retain) ICBackgroundTranscriber *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addCallRecordingTranscriptionTaskToQueueWithSpeakers:(id)a0 NGASR:(BOOL)a1 attachmentIdentifier:(id)a2;
- (void)addFirstTimeTranscriptionTaskToQueueWithMediaURL:(id)a0 attachmentIdentifier:(id)a1 subattachmentIdentifier:(id)a2;
- (void)addRetranscriptionTaskToQueueWithSubattachmentAndMediaInfo:(id)a0 attachmentIdentifier:(id)a1;
- (void)handleResumeForeground;

@end
