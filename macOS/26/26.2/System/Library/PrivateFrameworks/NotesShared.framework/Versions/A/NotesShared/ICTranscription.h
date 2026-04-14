@interface ICTranscription : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ _currentlyTranscribingAttachment;
    void /* unknown type, empty encoding */ _downloadingModel;
    void /* unknown type, empty encoding */ workerContext;
}

@property (class, nonatomic, retain) ICTranscription *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)addAudioTranscriptionTaskToQueueWithAttachmentIdentifier:(id)a0;
- (void)addCallRecordingTranscriptionTaskToQueueWithSpeakers:(id)a0 attachmentIdentifier:(id)a1;

@end
