@class NSString;

@interface AMPDesktopUI.ArtworkTableCell : RolloverCell {
    void /* unknown type, empty encoding */ artworkID;
    void /* unknown type, empty encoding */ kArtworkCornerRadius;
    void /* unknown type, empty encoding */ kArtworkVerticalInset;
    void /* unknown type, empty encoding */ kArtworkSize;
}

@property (nonatomic, copy) NSString *artworkID;
@property (nonatomic, weak) void /* unknown type, empty encoding */ artworkView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playStateBtn;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
