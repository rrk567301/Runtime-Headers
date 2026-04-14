@class NSColorList;
@protocol WKPopoverColorWellDelegate;

@interface WKPopoverColorWell : NSPopoverColorWell {
    struct RetainPtr<NSColorList> { NSColorList *m_ptr; } _suggestedColors;
    struct WeakObjCPtr<id<WKPopoverColorWellDelegate>> { id m_weakReference; } _webDelegate;
}

@property (weak, nonatomic) id<WKPopoverColorWellDelegate> webDelegate;

+ (id)_colorPopoverCreateIfNecessary:(BOOL)a0;

- (id).cxx_construct;
- (void)setSuggestedColors:(id)a0;
- (void).cxx_destruct;
- (void)_showPopover;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)popoverDidClose:(id)a0;

@end
