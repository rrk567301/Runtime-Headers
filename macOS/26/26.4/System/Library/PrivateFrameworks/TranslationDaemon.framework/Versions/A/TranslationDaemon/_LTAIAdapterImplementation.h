@class _LTLocalePair, NSURL;

@interface _LTAIAdapterImplementation : NSObject <_LTAIInferenceTranslating> {
    void /* unknown type, empty encoding */ hotfixURLStorage;
    void /* unknown type, empty encoding */ inferenceSession;
    void /* unknown type, empty encoding */ inferenceError;
}

@property (nonatomic, readonly) BOOL _hasInferenceSession;
@property (nonatomic, readonly) BOOL _hasInferenceError;
@property (nonatomic, retain) _LTLocalePair *localePair;
@property (nonatomic, copy) NSURL *hotfixURL;

- (void).cxx_destruct;
- (id)init;
- (void)translate:(id)a0 completion:(id /* block */)a1;
- (id)initWithLocalePair:(id)a0 taskHint:(long long)a1 processIdentifier:(long long)a2 hotfixURL:(id)a3;
- (BOOL)supportsLocalePair:(id)a0;
- (void)translate:(id)a0 spans:(id)a1 completion:(id /* block */)a2;

@end
