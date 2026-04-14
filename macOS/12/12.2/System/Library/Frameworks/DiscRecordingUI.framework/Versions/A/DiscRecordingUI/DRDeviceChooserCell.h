@class NSPopUpButtonCell, NSTimer, DRDeviceFilter, NSMutableArray;

@interface DRDeviceChooserCell : NSActionCell {
    NSPopUpButtonCell *_popupCell;
    NSTimer *_debounceTimer;
    DRDeviceFilter *_filter;
    NSMutableArray *_deviceList;
    struct __DRDevChooserFlags { unsigned char disableNotifications : 1; unsigned char awakened : 1; unsigned char newp : 1; unsigned int reserved : 29; } _dcFlags;
    unsigned long long _count;
    unsigned int _reserved1;
    unsigned int _reserved2;
    unsigned int _reserved3;
    unsigned int _reserved4;
}

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (id)filter;
- (void)setFilter:(id)a0;
- (void)setControlSize:(unsigned long long)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityRoleAttribute;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityChildrenAttribute;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (void)setFont:(id)a0;
- (void)setBordered:(BOOL)a0;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)setShowsFirstResponder:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 untilMouseUp:(BOOL)a3;
- (BOOL)showsFirstResponder;
- (id)menuItem;
- (void)_sendAction;
- (void)_invalidateTimer;
- (id)exposedBindings;
- (void)performClickWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)_setControlView:(id)a0;
- (void)setSelectedDevice:(id)a0;
- (id)selectedDevice;
- (id)_bestDevice;
- (void)selectDevice:(id)a0;
- (void)_initCommon:(id)a0;
- (id)newDevicePopupCell;
- (void)_rebuildPopup;
- (void)_deviceAppeared:(id)a0;
- (void)_devicePopupSelected:(id)a0;
- (void)_addCollectedDevices:(id)a0;
- (void)_deviceDisappeared:(id)a0;
- (void)_addDevices:(id)a0;

@end
