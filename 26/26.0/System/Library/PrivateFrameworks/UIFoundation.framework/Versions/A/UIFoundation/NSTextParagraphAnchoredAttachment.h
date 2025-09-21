@class NSString, NSTextAttachment;

@interface NSTextParagraphAnchoredAttachment : NSObject <NSTextViewportRenderingSurfaceKey>

@property (retain) NSTextAttachment *textAttachment;
@property unsigned long long position;
@property unsigned long long verticalPosition;
@property BOOL excludesText;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTextAttachment:(id)a0 position:(unsigned long long)a1;
- (void)_updateLayoutFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
