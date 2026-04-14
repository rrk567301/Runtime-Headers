@class TTYUtterance, NSString, NSTextView, TTYStretchImageView;
@protocol TTYUtteranceCellDelegate;

@interface TTYUtteranceCell : NSView <NSTextViewDelegate> {
    NSTextView *_textView;
    TTYStretchImageView *_bubbleView;
}

@property (retain, nonatomic) TTYUtterance *utterance;
@property (nonatomic, getter=isEditingUtterance) BOOL editingUtterance;
@property (nonatomic) id<TTYUtteranceCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForUtterance:(id)a0 andWidth:(double)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)viewDidMoveToSuperview;
- (void)textDidChange:(id)a0;
- (void)viewDidEndLiveResize;
- (void)updateLayout;
- (double)preferredHeightForWidth:(double)a0;
- (void)updateUtterance:(id)a0;
- (void)setSendProgressIndex:(unsigned long long)a0;
- (void)adjustTextViewSize;
- (struct CGSize { double x0; double x1; })preferredSizeForSize:(struct CGSize { double x0; double x1; })a0;

@end
