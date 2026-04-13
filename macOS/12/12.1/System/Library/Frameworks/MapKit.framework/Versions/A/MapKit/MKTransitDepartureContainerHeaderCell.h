@class MKTransitDepartureContainerHeaderViewModel, NSLayoutGuide, NSLayoutConstraint, MKImageView, _MKUILabel, MKTransitInfoLabelView;

@interface MKTransitDepartureContainerHeaderCell : MKCustomSeparatorCell {
    MKTransitInfoLabelView *_containerArtworkView;
    _MKUILabel *_containerTitleLabel;
    MKImageView *_incidentImageView;
    NSLayoutGuide *_contentLayoutGuide;
    NSLayoutConstraint *_artworkToTitleLabelHorizontalSpacingConstraint;
}

@property (retain, nonatomic) MKTransitDepartureContainerHeaderViewModel *viewModel;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_commonInit;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_updateAppearance;

@end
