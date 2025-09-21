@protocol SRDClientProtocol;

@interface SRDConnection : NSObject {
    struct __CFLocale { } *_locale;
    unsigned long long _flags;
    id<SRDClientProtocol> _delegate;
    struct __RXRecognitionSystem { } *_recognitionSystem;
}

- (void).cxx_destruct;
- (struct __RXRecognitionSystem { } *)recognitionSystem;
- (id)initWithLocale:(struct __CFLocale { } *)a0 flags:(unsigned long long)a1 delegate:(id)a2;

@end
