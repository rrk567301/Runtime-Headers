@interface ICBackgroundTranscriber : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ _isTranscribing;
    void /* unknown type, empty encoding */ _currentlyTranscribingAttachment;
    void /* unknown type, empty encoding */ workerContext;
}

@property (class, nonatomic, retain) ICBackgroundTranscriber *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addFirstTimeTranscriptionTaskToQueueWithMediaURL:(id)a0 attachmentIdentifier:(id)a1 subattachmentIdentifier:(id)a2;
- (void)addRetranscriptionTaskToQueueWithSubattachmentAndMediaInfo:(id)a0 attachmentIdentifier:(id)a1;

@end
