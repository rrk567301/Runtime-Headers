@class NSString;

@interface CoreTextGraphicsContextProvider : NSObject <NSTextGraphicsContextProvider, NSTextGraphicsContext>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) struct CGContext { } *CGContext;
@property (readonly, getter=isFlipped) BOOL flipped;
@property (readonly, getter=isDrawingToScreen) BOOL drawingToScreen;

+ (id)sharedProvider;
+ (Class)colorClassForApplicationFrameworkContext:(long long)a0;
+ (id)graphicsContextForApplicationFrameworkContext:(long long)a0;

- (void)becomeCurrentGraphicsContextDuringBlock:(id /* block */)a0;
- (void)restoreGraphicsState;
- (void)saveGraphicsState;

@end
