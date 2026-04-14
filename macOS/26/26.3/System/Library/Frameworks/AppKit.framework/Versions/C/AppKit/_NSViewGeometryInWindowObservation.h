@class NSView;
@protocol NSObject;

@interface _NSViewGeometryInWindowObservation : NSObject

@property (weak, nonatomic) NSView *view;
@property (copy, nonatomic) id /* block */ changeHandler;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (retain, nonatomic) id<NSObject> observer;

- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithView:(id)a0 options:(unsigned long long)a1 changeHandler:(id /* block */)a2;

@end
