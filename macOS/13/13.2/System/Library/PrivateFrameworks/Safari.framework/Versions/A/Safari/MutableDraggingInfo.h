@class NSPasteboard, MorphingDragImageController, NSImage, NSString, NSWindow;
@protocol TabBarViewItem;

@interface MutableDraggingInfo : NSObject <TabDraggingInfo, NSDraggingInfo>

@property (weak, nonatomic) MorphingDragImageController *controller;
@property (retain, nonatomic) NSWindow *draggingDestinationWindow;
@property (nonatomic) unsigned long long draggingSourceOperationMask;
@property (nonatomic) struct CGPoint { double x; double y; } draggingLocation;
@property (retain, nonatomic) NSImage *draggedImage;
@property (retain, nonatomic) id draggingSource;
@property (retain, nonatomic) id<TabBarViewItem> draggingItem;
@property struct CGPoint { double x; double y; } draggedImageLocation;
@property (retain) NSPasteboard *draggingPasteboard;
@property long long draggingSequenceNumber;
@property long long numberOfValidItemsForDrop;
@property BOOL animatesToDestination;
@property long long draggingFormation;
@property long long springLoadingHighlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)slideDraggedImageTo:(struct CGPoint { double x0; double x1; })a0;
- (void)enumerateDraggingItemsWithOptions:(unsigned long long)a0 forView:(id)a1 classes:(id)a2 searchOptions:(id)a3 usingBlock:(id /* block */)a4;
- (void)resetSpringLoading;
- (id)initWithMorphingDragImageController:(id)a0;

@end
