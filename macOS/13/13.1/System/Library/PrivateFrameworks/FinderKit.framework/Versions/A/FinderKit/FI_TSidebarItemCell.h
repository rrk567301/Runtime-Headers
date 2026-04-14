@class NSString, NSImage, FI_TMouseOverButton, NSTrackingArea;

@interface FI_TSidebarItemCell : NSTableCellView {
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _node;
    BOOL _enabled;
    struct function<NSImage *(bool, bool, bool, bool, NSTableViewRowSizeStyle, double)> { struct __value_func<NSImage *(bool, bool, bool, bool, NSTableViewRowSizeStyle, double)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _iconGetter;
    NSTrackingArea *_trackingArea;
    struct function<void (FI_TSidebarItemCell *, bool)> { struct __value_func<void (FI_TSidebarItemCell *, bool)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _fTrackingCallback;
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct __compressed_pair<TNotificationCenterObserver *, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__value_; } __end_cap_; } _observers;
}

@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL isEditing;
@property (nonatomic) int stateID;
@property (readonly, nonatomic) NSImage *image;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) BOOL drawingDragImage;
@property (retain, nonatomic) FI_TMouseOverButton *button;

+ (BOOL)prefersTrackingUntilMouseUp;
+ (const struct TFENode { struct OpaqueNodeRef *x0; } *)nodeForItem:(id)a0;
+ (id)makeSidebarItemCellForView:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roughActionButtonRectForCell:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
+ (void)drawSidebarIcon:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2 highlighted:(BOOL)a3;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)prepareForReuse;
- (void)setStringValue:(const void *)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRowSizeStyle:(long long)a0;
- (BOOL)isHighlighted;
- (void)viewWillDraw;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)imageSize;
- (void)displayRectIgnoringOpacity:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_textFieldFrame;
- (void)aboutToTearDown;
- (BOOL)isZone;
- (void)windowDidBecomeKey;
- (void)addTrackingCallback:(const void *)a0;
- (BOOL)isButtonRolledOver;
- (void)addActionButtonIfNeeded;
- (void)setActionButtonStateFor:(int)a0 action:(const void *)a1 buttonStateTransitions:(const void *)a2;
- (void)updateActionButtonAXTitle:(const void *)a0;
- (void)updateNameAndIcon;
- (void)finishMakingWithNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 iconGetter:(struct function<NSImage *(bool, bool, bool, bool, NSTableViewRowSizeStyle, double)> { struct __value_func<NSImage *(bool, bool, bool, bool, NSTableViewRowSizeStyle, double)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a1;
- (id)dataForIdentifier:(id)a0;
- (double)optimalWidthForHeight:(double)a0;
- (double)textFieldFirstBaselineOffsetFromTop;
- (void)layoutDetails;

@end
