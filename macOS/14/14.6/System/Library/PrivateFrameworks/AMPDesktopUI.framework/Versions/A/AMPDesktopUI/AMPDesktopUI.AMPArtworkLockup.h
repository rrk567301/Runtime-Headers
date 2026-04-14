@interface AMPDesktopUI.AMPArtworkLockup : NSView {
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ pullingArtwork;
    void /* unknown type, empty encoding */ style;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ viewModel;
@property (nonatomic) void /* unknown type, empty encoding */ padTo16By9;
@property (nonatomic) long long ibStyle;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)propertyKeysForViewSpy;
- (id)stringValueForViewSpyPropertyKey:(id)a0;

@end
