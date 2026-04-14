@interface ICTextElementAnimator : NSObject {
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ originTrackedParagraphs;
    void /* unknown type, empty encoding */ destinationTrackedParagraphs;
    void /* unknown type, empty encoding */ uuidsToElementAnimationConfigurations;
}

- (void).cxx_destruct;
- (id)init;
- (void)animateWithCompletion:(id /* block */)a0;
- (id)initWithTextView:(id)a0 originTrackedParagraphs:(id)a1 destinationTrackedParagraphs:(id)a2;

@end
