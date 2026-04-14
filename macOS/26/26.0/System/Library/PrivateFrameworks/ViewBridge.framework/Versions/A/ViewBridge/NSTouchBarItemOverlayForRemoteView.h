@class NSString, NSTouchBarItem;

@interface NSTouchBarItemOverlayForRemoteView : NSTouchBarItemOverlay {
    unsigned int _shown;
    NSTouchBarItem *_item;
}

@property (retain) NSString *remoteViewIdentifier;
@property (retain) NSTouchBarItemOverlayForRemoteView *keepAliveHack;

- (void)dealloc;
- (id)initWithItem:(id)a0;
- (void)hide;
- (void)showWithOptions:(id)a0;
- (void)didChangePopoverBarState:(unsigned char)a0;
- (BOOL)shown;

@end
