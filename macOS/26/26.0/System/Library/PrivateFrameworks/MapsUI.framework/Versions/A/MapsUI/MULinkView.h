@class NSString, NSTextView, NSAttributedString, NSColor;

@interface MULinkView : NSView <NSTextViewDelegate> {
    NSTextView *_textView;
    NSColor *_labelColor;
    NSColor *_linkColor;
}

@property (retain, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) unsigned long long numberOfLines;
@property (copy, nonatomic) id /* block */ selectionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
