@class ILMediaBrowserImagePreviewView, ILMediaBrowserMovieView, NSArray, NSWindow;

@interface ILMediaBrowserPreviewView : NSControl {
    ILMediaBrowserMovieView *_movieView;
    ILMediaBrowserImagePreviewView *_imageView;
    id _representedObject;
    NSArray *_objectList;
    BOOL _showingThumbnail;
    id _enterKeyTarget;
    SEL _enterKeyAction;
    id _viewDelegate;
    NSWindow *_flagWindow;
}

+ (id)_notificationsToObserve;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cleanup;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void)keyDown:(id)a0;
- (void)forceStop;
- (id)init;
- (id)delegate;
- (void)setRepresentedObject:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)mouseMoved:(id)a0;
- (id)representedObject;
- (void)viewDidEndLiveResize;
- (void)stopPreview;
- (void)setShowingThumbnail:(BOOL)a0;
- (void)previewPrevious;
- (void)_observeAtEndNotifications:(BOOL)a0;
- (void)hideFlag;
- (BOOL)isFlagShowing;
- (void)moviePreviewDidEnd:(id)a0;
- (id)objectList;
- (void)previewImageAtPath:(id)a0;
- (void)previewMediaObject:(id)a0 inList:(id)a1;
- (void)previewMovieAtPath:(id)a0;
- (void)previewNext;
- (void)previewObjectAtIndex:(long long)a0;
- (void)setEnterKeyAction:(SEL)a0;
- (void)setEnterKeyTarget:(id)a0;
- (void)setObjectList:(id)a0;
- (void)showFlag;
- (void)showImageView;
- (void)showMovieView;
- (void)updateFlagPosition;

@end
