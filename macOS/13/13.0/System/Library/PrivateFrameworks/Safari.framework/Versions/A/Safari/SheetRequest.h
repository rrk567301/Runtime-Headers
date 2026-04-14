@class NSWindow;

@interface SheetRequest : NSObject {
    NSWindow *_window;
}

@property (readonly, nonatomic) NSWindow *window;
@property (readonly, nonatomic) BOOL isAuthenticationSheetRequest;

- (void).cxx_destruct;
- (void)displaySheet;
- (void)displaySheetInWindow:(id)a0;
- (BOOL)_windowHasAttachedSheet;

@end
