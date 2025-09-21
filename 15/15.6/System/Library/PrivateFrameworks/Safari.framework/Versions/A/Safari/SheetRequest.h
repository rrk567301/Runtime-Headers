@class NSWindow;

@interface SheetRequest : NSObject {
    NSWindow *_window;
}

@property (readonly, nonatomic) NSWindow *window;
@property (readonly, nonatomic) char isAuthenticationSheetRequest;

- (void).cxx_destruct;
- (char)_windowHasAttachedSheet;
- (void)displaySheet;
- (void)displaySheetInWindow:(id)a0;

@end
