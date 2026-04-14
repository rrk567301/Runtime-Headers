@class NSArray, NSPasteboard, NSImage;
@protocol NSDraggingSource;

@interface NSDraggingSession : NSObject {
    void *_private;
    NSPasteboard *_pboard;
    NSImage *_compositeImageCache;
    BOOL _animatesOnCancelOrFail;
}

@property BOOL animatesToDraggingFormationOnBeginDrag;
@property struct OpaqueCoreDrag { unsigned int x0; unsigned int x1; struct DragTarget { unsigned long long x0; int x1; unsigned int x2; } x2; struct DragTarget { unsigned long long x0; int x1; unsigned int x2; } x3; struct CGPoint { double x0; double x1; } x4; struct CGPoint { double x0; double x1; } x5; struct CGPoint { double x0; double x1; } x6; struct CGPoint { double x0; double x1; } x7; unsigned int x8; unsigned int x9; unsigned int x10; struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; struct CGPoint { double x0; double x1; } x21; unsigned char x22; struct CGSRegionObject *x23; struct CGPoint { double x0; double x1; } x24; void *x25; void *x26; void *x27; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x28; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x29; short x30; short x31; short x32; short x33; struct __CFRunLoopTimer *x34; struct __CFRunLoopTimer *x35; struct __CFRunLoopTimer *x36; double x37; float x38; double x39; int x40; unsigned int x41; struct CGPoint { double x0; double x1; } x42; struct __CFString *x43; struct __CFDictionary *x44; struct __CFDictionary *x45; void *x46; void /* function */ *x47; void /* function */ *x48; void *x49; unsigned int x50; struct OpaquePasteboardRef *x51; struct OpaqueCoreDrag *x52; struct __CFString *x53; unsigned int x54; void /* function */ *x55; void *x56; long long x57; struct __CFDictionary *x58; struct __CFDictionary *x59; unsigned int x60; struct CGPoint { double x0; double x1; } x61; struct __CFRunLoopTimer *x62; struct __CFRunLoopTimer *x63; double x64; double x65; long long x66; struct CoreEnsembleInfo { void *x0; int x1; struct __CFRunLoop *x2; unsigned int x3; unsigned int x4; unsigned int x5; } x67; void /* function */ *x68; void *x69; } *dragRef;
@property id alternateDragSource;
@property (readonly) id<NSDraggingSource> source;
@property (readonly) id<NSDraggingSource> filePromiseDragSource;
@property (retain) NSArray *filePromiseProviders;
@property struct CGPoint { double x0; double x1; } draggingLocation;
@property struct CGPoint { double x; double y; } draggingImageOffset;
@property long long draggingFormation;
@property BOOL animatesToStartingPositionsOnCancelOrFail;
@property long long draggingLeaderIndex;
@property (readonly) NSPasteboard *draggingPasteboard;
@property (readonly) long long draggingSequenceNumber;

- (void)dealloc;
- (id)_compositeImage;
- (void)enumerateDraggingItemsWithOptions:(unsigned long long)a0 forView:(id)a1 classes:(id)a2 searchOptions:(id)a3 usingBlock:(id /* block */)a4;
- (void)enumerateDraggingItemsForClass:(Class)a0 view:(id)a1 usingBlock:(id /* block */)a2;
- (id)_initWithPasteboard:(id)a0 draggingItems:(id)a1 clippingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 source:(id)a3;
- (id)_initWithPasteboard:(id)a0 image:(id)a1 offset:(struct CGPoint { double x0; double x1; })a2 source:(id)a3;
- (id)_commonInitWithPasteboard:(id)a0 source:(id)a1;
- (struct CGPoint { double x0; double x1; })locationForSlideBack;
- (void)setLocationForSlideBack:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })setDraggingLocation;

@end
