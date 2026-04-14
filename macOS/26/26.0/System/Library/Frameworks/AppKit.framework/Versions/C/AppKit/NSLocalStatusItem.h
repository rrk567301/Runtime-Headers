@class NSCGSStatusItem;
@protocol NSStatusItemDelegate;

@interface NSLocalStatusItem : NSStatusItem {
    NSCGSStatusItem *_cgsItem;
    long long _dragState;
    long long _lastDragOperation;
    struct CGPoint { double x; double y; } _lastDragPoint;
    struct { unsigned char isDragging : 1; unsigned char isDraggedOutOfBar : 1; unsigned char customDragDestination : 1; unsigned char isCreationDrag : 1; unsigned char sawMoveEvent : 1; unsigned char draggedLongEnoughToAllowRemoval : 1; unsigned char dragSetSomeOverrideCursor : 1; } _flags;
}

@property BOOL unclippedInMenuBar;
@property (weak) id<NSStatusItemDelegate> delegate;
@property BOOL editMode;

+ (void)_registerNotificationHandlersIfNeeded;

- (void)setBehavior:(unsigned long long)a0;
- (void)setAppearance:(id)a0;
- (void).cxx_destruct;
- (void)_wakeStatusItem;
- (void)_beginCreationDragWithHitPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_cleanUpDragCursorIfNeeded;
- (void)_completeStatusItemDrag;
- (float)_currentPreferredPosition;
- (id)_customDragOperationCursor;
- (BOOL)_customDragOperationForDragMovement;
- (id)_dragCursor;
- (long long)_dragState;
- (void)_dragStatusItemWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (float)_dropPriority;
- (id)_initWithStatusBar:(id)a0 length:(double)a1 priority:(long long)a2 systemInsertOrder:(long long)a3 activeItem:(id)a4;
- (BOOL)_isDragging;
- (void)_itemMovedDuringDrag;
- (void)_navigateWithCommand:(unsigned int)a0 options:(unsigned int)a1;
- (void)_noteDraggedLongEnoughToAllowRemoval;
- (int)_overflowSpecifierPriority;
- (void)_performCustomDragOperation:(BOOL)a0;
- (void)_presentIndicatorInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_restorePreferencesFromAutosaveName;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectedContentFrame;
- (void)_setDisplayIdentifier:(id)a0;
- (void)_setDropPriority:(float)a0;
- (void)_setHideFromBar:(BOOL)a0;
- (void)_setOverflowSpecifierPriority:(int)a0;
- (void)_setSelectedContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setVisible:(BOOL)a0 temporary:(BOOL)a1;
- (BOOL)_shouldReplicate;
- (void)_snapshotContentForRemoval;
- (void)_startStatusItemDrag:(BOOL)a0;
- (void)_statusItemContentViewsDidChange;
- (unsigned int)_statusItemFlags;
- (BOOL)_supportsDragging;
- (void)_uninstall;
- (void)_updateDragState;
- (void)_updateItemFlags;
- (void)_updateItemForCurrentMetrics;
- (void)_updateItemForMetrics:(id)a0;
- (void)_userRemovedStatusItemOnCreation:(BOOL)a0;
- (void)_userReturnedStatusItemToBar;
- (id)createReplicantItem;
- (void)replaceWithStatusItem:(id)a0;

@end
