@class KHFrame, NSString, NSRecursiveLock, NSOperationQueue, NSTextStorage, KHTextLayoutManager;

@interface KHTextFrameRenderer : KHFrameRenderer <NSTextStorageDelegate> {
    NSTextStorage *_textStorage;
    KHTextLayoutManager *_layoutManager;
    char _textIsClipped;
    NSRecursiveLock *_textManagementLock;
}

@property (retain, nonatomic) KHFrame *autoColorSource;
@property (retain, nonatomic) NSOperationQueue *evaluationQueue;
@property char validClippingCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)textContainers;
- (id)stringAttributes;
- (id)placeholderAttributes;
- (void)doneEditing;
- (void)textDidChange;
- (void)_ensureValidTextStorage;
- (void)_evaluateAutoColorForSource:(id)a0 target:(id)a1 environment:(id)a2;
- (void)_fillFrameWithString:(id)a0 exact:(char)a1 fillStyle:(int)a2;
- (void)_notifyPlacedPhotosChanged:(id)a0;
- (struct CGPoint { double x0; double x1; })_originForTextContainerAtIndex:(unsigned long long)a0 exact:(char)a1;
- (void)_processEditing:(char)a0 external:(char)a1;
- (void)_processEditing:(char)a0 external:(char)a1 withString:(id)a2;
- (char)_resizeTextFrameToFit;
- (void)_setupTextSystem;
- (char)_shouldDrawFakeText;
- (void)applyStyleAttributes;
- (void)applyStyleAttributesWithForce:(char)a0;
- (char)checkClippedText;
- (void)evaluateForAutoColorWithEnvironment:(id)a0 asynchronous:(char)a1;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (void)fillFrameWithString:(id)a0 exact:(char)a1 repeat:(char)a2;
- (void)fillTemplateThumbnailContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (void)fitTextStorageToFrameWithMode:(unsigned long long)a0;
- (char)hasEmptyText;
- (void)loadAttributes;
- (struct CGSize { double x0; double x1; })preferredTextFrameSize;
- (void)setupTextContainers;
- (void)textAttributesDidChangeExternally;
- (void)textDidChangeExternally:(id)a0 momentary:(char)a1;
- (id)textManagementLock;
- (char)textMatchesMaster;

@end
