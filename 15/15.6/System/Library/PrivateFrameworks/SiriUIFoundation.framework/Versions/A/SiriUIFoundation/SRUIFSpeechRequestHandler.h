@class NSMutableSet, NSObject;
@protocol OS_dispatch_group, SRUIFSpeechRequestHandlerDelegate;

@interface SRUIFSpeechRequestHandler : NSObject {
    id /* block */ _continuePendingRequest;
    char _sendContextBeforeContinuingSpeechRequest;
    NSMutableSet *_speechRequestGroupGraveyard;
}

@property (retain, nonatomic, getter=_currentSpeechRequestGroup, setter=_setCurrentSpeechRequestGroup:) NSObject<OS_dispatch_group> *currentSpeechRequestGroup;
@property (weak, nonatomic) id<SRUIFSpeechRequestHandlerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)cancelSpeechRequest;
- (id)currentSpeechRequestDispatchGroup;
- (void)discardCurrentSpeechGroup;
- (id)prepareForNewSpeechRequest;
- (void)speechRecordingDidFail;
- (void)speechRecordingWillBegin;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)a0 completion:(id /* block */)a1;
- (void)startSpeechRequestWithSpeechRequestOptions:(id)a0 instrumentationTurn:(id)a1 isInitialBringUp:(char)a2 completion:(id /* block */)a3;
- (void)stopSpeechRequest;
- (void)stopSpeechRequestWithOptions:(id)a0;
- (void)updateSpeechRequestOptions:(id)a0;
- (void)_continuePendingSpeechRequest;
- (void)_performOnCurrentSpeechDipatchGroup:(id /* block */)a0;
- (void)nonSpeechRequestWillBegin;

@end
