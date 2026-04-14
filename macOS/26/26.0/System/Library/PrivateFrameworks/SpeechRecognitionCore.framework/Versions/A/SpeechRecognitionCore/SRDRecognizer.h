@protocol SRDRecognizerDelegate;

@interface SRDRecognizer : NSObject {
    struct __RXRecognitionSystem { } *_recognitionSystem;
    id<SRDRecognizerDelegate> _delegate;
    unsigned long long _flags;
    struct __RXRecognizer { } *_recognizer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (struct __RXRecognizer { } *)recognizer;
- (id)initWithRecognitionSystem:(struct __RXRecognitionSystem { } *)a0 delegate:(id)a1 flags:(unsigned long long)a2;

@end
