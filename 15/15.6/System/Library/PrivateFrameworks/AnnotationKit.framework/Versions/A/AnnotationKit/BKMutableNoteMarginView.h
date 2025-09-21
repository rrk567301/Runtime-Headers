@class NSString;
@protocol BKMutableNoteMarginViewDelegate;

@interface BKMutableNoteMarginView : AKNoteMarginView <NSTextViewDelegate>

@property (readonly, nonatomic) NSString *mutatedText;
@property (weak, nonatomic) id<BKMutableNoteMarginViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isOpaque;
- (void)textDidChange:(id)a0;

@end
