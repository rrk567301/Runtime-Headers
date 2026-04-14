@class NSView, NSCorrectionIndicatorUnderlineView, NSTimer;

@interface NSCorrectionIndicatorUnderline : NSObject {
    NSView *_hostView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _boundingBoxInHostView;
    NSCorrectionIndicatorUnderlineView *_underlineView;
    NSTimer *_fadeTimer;
}

+ (id)correctionIndicatorUnderlineColor;
+ (id)correctionIndicatorUnderlineColorForAppearance:(id)a0;

- (void)dealloc;
- (id)init;
- (void)remove;
- (void)dismiss;
- (void)_adjustLayoutForView:(id)a0;
- (void)_fadeTimer:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_underlineRectForTypedText:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flipped:(BOOL)a1;
- (void)showAtRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;

@end
