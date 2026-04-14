@protocol ACUIPasscodeControlTextEditorDelegate;

@interface ACUIPasscodeControlTextEditor : NSTextView

@property (nonatomic) id<ACUIPasscodeControlTextEditorDelegate> pasteDelegate;

- (void)paste:(id)a0;
- (void)dealloc;

@end
