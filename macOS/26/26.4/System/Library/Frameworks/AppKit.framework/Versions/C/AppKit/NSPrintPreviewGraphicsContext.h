@class NSGraphicsContext;

@interface NSPrintPreviewGraphicsContext : NSProxy {
    NSGraphicsContext *_previousContext;
}

- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)attributes;
- (BOOL)isFlipped;
- (id)description;
- (BOOL)isDrawingToScreen;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (id)initWithPreviousContext:(id)a0;

@end
