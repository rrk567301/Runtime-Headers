@interface NSStatusBar : NSObject {
    id _items;
    void *_fReserved1;
    long long _registeredForNote;
}

@property (class, readonly) NSStatusBar *systemStatusBar;

@property (readonly) double contentPadding;
@property (readonly) struct CGSize { double x0; double x1; } backgroundSelectionInset;
@property (readonly, getter=isVertical) BOOL vertical;
@property (readonly) double thickness;

+ (BOOL)_performKeyEquivalent:(id)a0;

- (void)dealloc;
- (id)init;
- (id)_name;
- (void)_setRegisteredForNotifications:(BOOL)a0;
- (id)_statusItemWithLength:(double)a0 withPriority:(long long)a1;
- (void)_removeStatusItem:(id)a0;
- (void)_insertStatusItem:(id)a0;
- (void)_insertObjectInItemArray:(id)a0;
- (void)_removeObjectFromItemArray:(id)a0;
- (BOOL)_performKeyEquivalent:(id)a0;
- (id)statusItemWithLength:(double)a0;
- (void)removeStatusItem:(id)a0;
- (id)_statusItemWithLength:(double)a0 systemInsertOrder:(long long)a1;
- (void)_statusItemIsDeallocing:(id)a0;
- (id)_createStatusItemControlInWindow:(id)a0;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 inView:(id)a1 highlight:(BOOL)a2;
- (long long)backgroundStyleForHighlight:(BOOL)a0;
- (id)_statusItems;
- (void)_navigationCtrlF8Pressed;
- (void)_userRemoveStatusItem:(id)a0;
- (void)_updateItemsForMetrics:(id)a0;

@end
