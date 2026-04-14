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

- (void)dealloc;
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)cleanup;
- (void)setRepresentedObject:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)acceptsFirstResponder;
- (void)mouseMoved:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)representedObject;
- (void)keyDown:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)viewDidEndLiveResize;
- (void)stopPreview;
- (void)setShowingThumbnail:(BOOL)a0;
- (void)forceStop;
- (void)previewPrevious;
- (void)previewNext;
- (void)setEnterKeyTarget:(id)a0;
- (void)setEnterKeyAction:(SEL)a0;
- (void)previewMediaObject:(id)a0 inList:(id)a1;
- (BOOL)isFlagShowing;
- (void)hideFlag;
- (void)_observeAtEndNotifications:(BOOL)a0;
- (void)updateFlagPosition;
- (void)setObjectList:(id)a0;
- (void)previewMovieAtPath:(id)a0;
- (void)previewImageAtPath:(id)a0;
- (void)moviePreviewDidEnd:(id)a0;
- (void)showMovieView;
- (void)showImageView;
- (void)showFlag;
- (void)previewObjectAtIndex:(long long)a0;
- (id)objectList;

@end
