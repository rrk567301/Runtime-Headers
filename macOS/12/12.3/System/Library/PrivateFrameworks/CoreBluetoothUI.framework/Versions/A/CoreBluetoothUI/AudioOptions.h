@class NSString, NSView, NSArray, CBPeer;

@interface AudioOptions : NSWindowController <AudioOptionsViewControllerAccessor> {
    NSArray *optionViewControllers;
    BOOL isReferenceUsed;
    CBPeer *_peer;
}

@property NSView *optionsPanel;
@property NSView *popupReference;
@property CBPeer *peer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)peerSupportsOptions:(id)a0;
+ (id)audioOptionsForPeer:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)windowDidLoad;
- (id)getAudioOptionsViewControllerForClass:(id)a0;
- (void)attachAudioOptionViewControllerViews;
- (void)lineupViews:(id)a0;
- (void)handleDone:(id)a0;

@end
