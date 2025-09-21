@class NSString, _AMiCalDocument, NSNumber;

@interface _AMiCalWindow : SBObject

@property (copy) NSString *name;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, copy) _AMiCalDocument *document;
@property (readonly) char closeable;
@property (readonly) char titled;
@property (copy) NSNumber *index;
@property (readonly) char floating;
@property (readonly) char miniaturizable;
@property char miniaturized;
@property (readonly) char modal;
@property (readonly) char resizable;
@property char visible;
@property (readonly) char zoomable;
@property char zoomed;

- (void)show;
- (void)delete;
- (void)moveTo:(id)a0;
- (id)id;
- (char)exists;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)saveIn:(id)a0 as:(id)a1;

@end
