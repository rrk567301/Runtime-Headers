@class NSString, _AMKeynote5Slideshow;

@interface _AMKeynote5Window : _AMKeynote5Item

@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) char closeable;
@property (readonly, copy) _AMKeynote5Slideshow *document;
@property (readonly) char floating;
@property long long index;
@property (readonly) char miniaturizable;
@property char miniaturized;
@property (readonly) char modal;
@property (copy) NSString *name;
@property (readonly) char resizable;
@property (readonly) char titled;
@property char visible;
@property (readonly) char zoomable;
@property char zoomed;

- (long long)id;

@end
