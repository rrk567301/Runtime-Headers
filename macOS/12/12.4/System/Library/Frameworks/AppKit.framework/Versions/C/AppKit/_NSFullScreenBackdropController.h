@class _NSFullScreenSpace, NSMutableArray;

@interface _NSFullScreenBackdropController : NSObject {
    NSMutableArray *_backgroundWindows;
}

@property (nonatomic) _NSFullScreenSpace *space;

- (void)dealloc;
- (id)backgroundWindowIDs;
- (void)removeBackgroundWindows;
- (id)_createBackgroundWindowOnScreen:(id)a0;
- (void)updateBackgroundWindows;

@end
