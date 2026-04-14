@class NSString, NSTouchBarItem;

@interface NSTouchBarItemOverlayForRemoteView : NSTouchBarItemOverlay {
    unsigned int _shown;
    NSTouchBarItem *_item;
}

@property (retain) NSString *remoteViewIdentifier;
@property (retain) NSTouchBarItemOverlayForRemoteView *keepAliveHack;

- (id)initWithItem:(id)a0;
- (void)dealloc;
- (void)hide;
- (void)showWithOptions:(id)a0;
- (void)didChangePopoverBarState:(unsigned char)a0;
- (BOOL)shown;

@end
