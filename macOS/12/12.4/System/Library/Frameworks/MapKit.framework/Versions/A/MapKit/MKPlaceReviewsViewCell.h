@class MKVibrancyAwareLabelView, NSString, _MKUILabel, NSLayoutConstraint, NSDate, MKImageView, MKPlaceReviewAvatarGenerator;

@interface MKPlaceReviewsViewCell : MKPlaceSectionRowView {
    MKImageView *_pictureView;
    MKVibrancyAwareLabelView *_detailLabel;
    _MKUILabel *_reviewLabel;
    NSLayoutConstraint *_reviewLabelTopConstraint;
    NSLayoutConstraint *_reviewLabelToAuthorLabelConstraint;
    NSLayoutConstraint *_authorLabelBaselineConstraint;
}

@property (nonatomic) unsigned long long rating;
@property (copy, nonatomic) NSString *author;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) BOOL isLastReview;
@property (retain, nonatomic) MKPlaceReviewAvatarGenerator *avatarGenerator;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)infoCardThemeChanged;
- (void)_contentSizeDidChange;
- (void)setReview:(id)a0;
- (void)_updatePictureTheme:(id)a0;
- (void)_updateBaselineConstraints;
- (id)detailLabelText;
- (void)setReviewText:(id)a0;
- (void)setPicture:(id)a0;
- (unsigned long long)maxCharacters;

@end
