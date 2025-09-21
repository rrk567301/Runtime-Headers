@class NSString, _AMMailDocument;

@interface _AMMailWindow : SBObject

@property (readonly, copy) NSString *name;
@property long long index;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) char closeable;
@property (readonly) char miniaturizable;
@property char miniaturized;
@property (readonly) char resizable;
@property char visible;
@property (readonly) char zoomable;
@property char zoomed;
@property (readonly, copy) _AMMailDocument *document;

- (void)delete;
- (void)moveTo:(id)a0;
- (long long)id;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(char)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
