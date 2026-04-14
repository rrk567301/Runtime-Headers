@class NSView, NSString;

@interface _NSViewGeometryInWindowConcreteObservation : NSObject <_NSViewGeometryInWindowObservation>

@property (readonly, weak, nonatomic) NSView *view;
@property (readonly, copy, nonatomic) id /* block */ changeHandler;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic) unsigned long long observerToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)dealloc;
- (void)_geometryInWindowDidChange:(id)a0;
- (id)initWithView:(id)a0 options:(unsigned long long)a1 changeHandler:(id /* block */)a2;

@end
