@class NSString;

@interface CoreTextGraphicsContextProvider : NSObject <NSTextGraphicsContextProvider, NSTextGraphicsContext>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) struct CGContext { } *CGContext;
@property (readonly, getter=isFlipped) char flipped;
@property (readonly, getter=isDrawingToScreen) char drawingToScreen;

+ (Class)colorClassForApplicationFrameworkContext:(long long)a0;
+ (id)graphicsContextForApplicationFrameworkContext:(long long)a0;
+ (id)sharedProvider;

- (void)restoreGraphicsState;
- (void)saveGraphicsState;
- (void)becomeCurrentGraphicsContextDuringBlock:(id /* block */)a0;

@end
