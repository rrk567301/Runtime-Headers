@class NSView, NSObject;
@protocol AMPAvatarLockupModel;

@interface AMPAvatarLockup : NSButton {
    BOOL _fetchingArt;
    BOOL _actuallyRolledOver;
}

@property (retain, nonatomic) NSView *rolloverLayer;
@property (nonatomic) BOOL actuallyRolledOver;
@property (retain, nonatomic) NSObject<AMPAvatarLockupModel> *viewModel;
@property (nonatomic) BOOL showRolledOver;

+ (id)lockup;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)commonInit;
- (void)drawFocusRingMask;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)artworkFetchIsPending;
- (void)fetchArt;
- (id)propertyKeysForViewSpy;
- (void)reflectAction:(id)a0;

@end
