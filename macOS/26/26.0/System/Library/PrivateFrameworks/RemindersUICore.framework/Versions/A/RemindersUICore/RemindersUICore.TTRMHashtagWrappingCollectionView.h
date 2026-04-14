@interface RemindersUICore.TTRMHashtagWrappingCollectionView : RemindersUICore.TTRNoAnimationContainerBoxView {
    void /* unknown type, empty encoding */ collectionViewDelegate;
    void /* unknown type, empty encoding */ wrappingContainer;
    void /* unknown type, empty encoding */ showsAllTagsButton;
    void /* unknown type, empty encoding */ hashtagLabels;
    void /* unknown type, empty encoding */ allowsEmptySelection;
    void /* unknown type, empty encoding */ allowsExcludedSelection;
    void /* unknown type, empty encoding */ populator;
    void /* unknown type, empty encoding */ internalSelection;
    void /* unknown type, empty encoding */ dropState;
    void /* unknown type, empty encoding */ targetHashtagLabelForPerformingDrop;
    void /* unknown type, empty encoding */ dynamicTypeSizeObserver;
    void /* unknown type, empty encoding */ contentSizeCancellable;
    void /* unknown type, empty encoding */ contentSizeCache;
    void /* unknown type, empty encoding */ updateFlags;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)menuForEvent:(id)a0;
- (void).cxx_destruct;
- (void)draggingExited:(id)a0;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (id)initWithArrangedSubviews:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (void)hashtagButtonAction:(id)a0;

@end
