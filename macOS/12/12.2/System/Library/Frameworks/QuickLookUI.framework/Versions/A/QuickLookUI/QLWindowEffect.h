@class NSWindow, NSMapTable;

@interface QLWindowEffect : NSObject {
    id /* block */ _preparationBlock;
    id /* block */ _completionBlock;
    NSMapTable *_childWindows;
}

@property (retain) NSWindow *window;
@property (copy) id /* block */ preparationBlock;
@property (copy) id /* block */ completionBlock;
@property unsigned int effectID;

+ (double)QLEaseInLongEaseOutValueForProgress:(double)a0 isInverted:(BOOL)a1;

- (void)finalize;
- (void)dealloc;
- (void)invoke;
- (id)prepare;
- (id)initWithWindow:(id)a0;
- (void)done;
- (void)abort;
- (void)_restoreChildWindows;
- (void)windowDidUpdate;

@end
