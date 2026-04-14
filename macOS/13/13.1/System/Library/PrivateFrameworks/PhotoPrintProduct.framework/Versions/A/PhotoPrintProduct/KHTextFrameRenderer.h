@class KHFrame, NSString, NSRecursiveLock, NSOperationQueue, NSTextStorage, KHTextLayoutManager;

@interface KHTextFrameRenderer : KHFrameRenderer <NSTextStorageDelegate> {
    NSTextStorage *_textStorage;
    KHTextLayoutManager *_layoutManager;
    BOOL _textIsClipped;
    NSRecursiveLock *_textManagementLock;
}

@property (retain, nonatomic) KHFrame *autoColorSource;
@property (retain, nonatomic) NSOperationQueue *evaluationQueue;
@property BOOL validClippingCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)textContainers;
- (id)placeholderAttributes;
- (void)doneEditing;
- (void)textDidChange;
- (id)stringAttributes;
- (void)loadAttributes;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (void)_notifyPlacedPhotosChanged:(id)a0;
- (void)_setupTextSystem;
- (BOOL)_resizeTextFrameToFit;
- (void)_ensureValidTextStorage;
- (void)fillFrameWithString:(id)a0 exact:(BOOL)a1 repeat:(BOOL)a2;
- (void)_fillFrameWithString:(id)a0 exact:(BOOL)a1 fillStyle:(int)a2;
- (BOOL)checkClippedText;
- (void)setupTextContainers;
- (BOOL)_shouldDrawFakeText;
- (void)fillTemplateThumbnailContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (struct CGPoint { double x0; double x1; })_originForTextContainerAtIndex:(unsigned long long)a0 exact:(BOOL)a1;
- (BOOL)textMatchesMaster;
- (BOOL)hasEmptyText;
- (void)_processEditing:(BOOL)a0 external:(BOOL)a1;
- (struct CGSize { double x0; double x1; })preferredTextFrameSize;
- (void)_processEditing:(BOOL)a0 external:(BOOL)a1 withString:(id)a2;
- (void)textDidChangeExternally:(id)a0 momentary:(BOOL)a1;
- (void)textAttributesDidChangeExternally;
- (id)textManagementLock;
- (void)applyStyleAttributes;
- (void)applyStyleAttributesWithForce:(BOOL)a0;
- (void)fitTextStorageToFrameWithMode:(unsigned long long)a0;
- (void)evaluateForAutoColorWithEnvironment:(id)a0 asynchronous:(BOOL)a1;
- (void)_evaluateAutoColorForSource:(id)a0 target:(id)a1 environment:(id)a2;

@end
