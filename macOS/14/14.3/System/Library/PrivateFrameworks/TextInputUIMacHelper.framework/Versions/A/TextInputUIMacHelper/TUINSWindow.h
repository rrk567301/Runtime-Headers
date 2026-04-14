@class NSArray, NSRemoteViewController, NSRemoteView;

@interface TUINSWindow : NSWindow

@property (retain, nonatomic) NSRemoteViewController *remoteViewController;
@property (readonly, nonatomic) NSRemoteView *remoteView;
@property (retain, nonatomic) NSArray *constraints;
@property (nonatomic) BOOL shadowEnabled;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } insets;

- (id)init;
- (void).cxx_destruct;
- (double)_cornerRadius;
- (BOOL)canBecomeKeyWindow;
- (unsigned long long)shadowOptions;
- (id)uiWindows;

@end
