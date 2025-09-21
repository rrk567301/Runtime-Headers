@class NSString;

@interface WebSpeechRecognizerTaskImpl : NSObject <SFSpeechRecognitionTaskDelegate, SFSpeechRecognizerDelegate> {
    struct Markable<WTF::ObjectIdentifierGeneric<WebCore::SpeechRecognitionConnectionClientIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>, WTF::ObjectIdentifierGeneric<WebCore::SpeechRecognitionConnectionClientIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>::MarkableTraits> { struct ObjectIdentifierGeneric<WebCore::SpeechRecognitionConnectionClientIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long> { unsigned long long m_identifier; } m_value; } _identifier;
    struct BlockPtr<void (const WebCore::SpeechRecognitionUpdate &)> { id /* block */ m_block; } _delegateCallback;
    BOOL _doMultipleRecognitions;
    unsigned long long _maxAlternatives;
    struct RetainPtr<SFSpeechRecognizer> { void *m_ptr; } _recognizer;
    struct RetainPtr<SFSpeechAudioBufferRecognitionRequest> { void *m_ptr; } _request;
    struct WeakObjCPtr<SFSpeechRecognitionTask> { id m_weakReference; } _task;
    BOOL _hasSentSpeechStart;
    BOOL _hasSentSpeechEnd;
    BOOL _hasSentEnd;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stop;
- (void)abort;
- (void)sendEndIfNeeded;
- (void)audioSamplesAvailable:(struct opaqueCMSampleBuffer { } *)a0;
- (void)callbackWithTranscriptions:(id)a0 isFinal:(char)a1;
- (id)initWithIdentifier:(struct ObjectIdentifierGeneric<WebCore::SpeechRecognitionConnectionClientIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long> { unsigned long long x0; })a0 locale:(id)a1 doMultipleRecognitions:(char)a2 reportInterimResults:(char)a3 maxAlternatives:(unsigned long long)a4 delegateCallback:(id /* block */)a5;
- (void)sendSpeechEndIfNeeded;
- (void)sendSpeechStartIfNeeded;
- (void)speechRecognitionTask:(id)a0 didFinishRecognition:(id)a1;
- (void)speechRecognitionTask:(id)a0 didFinishSuccessfully:(char)a1;
- (void)speechRecognitionTask:(id)a0 didHypothesizeTranscription:(id)a1;
- (void)speechRecognitionTaskWasCancelled:(id)a0;
- (void)speechRecognizer:(id)a0 availabilityDidChange:(char)a1;

@end
