@class FI_TPathControl;

@interface FI_TGoToResultTableCellView : NSTableCellView {
    FI_TPathControl *_pathControl;
}

+ (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })nibName;
+ (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })cellIdentifier;
+ (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct TFENode *x2; })popupPathForGoToItem:(id)a0;

- (void)setObjectValue:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)pathControl;
- (id)goToItem;

@end
