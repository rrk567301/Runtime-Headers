@class NSView, NSObject;
@protocol AMPAvatarLockupModel;

@interface AMPAvatarLockup : NSButton {
    BOOL _fetchingArt;
    BOOL _actuallyRolledOver;
}

@property (retain, nonatomic) NSView *rolloverLayer;
@property (nonatomic) BOOL actuallyRolledOver;
@property (retain, nonatomic) NSObject<AMPAvatarLockupModel> *actualViewModel;
@property (retain, nonatomic) NSObject<AMPAvatarLockupModel> *viewModel;
@property (nonatomic) BOOL showRolledOver;

+ (void)initialize;
+ (id)lockup;

- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)updateLayer;
- (void)commonInit;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)drawFocusRingMask;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)artworkFetchIsPending;
- (void)fetchArt;
- (id)propertyKeysForViewSpy;
- (void)reflectAction:(id)a0;

@end
