@class MKButtonWithTargetArgument, NSString, NSTimer, NSLayoutConstraint, _MKUILabel, NSStackView;

@interface MKTransitDeparturesSectionHeaderView : MKMouseOverActionView <MKMultiLineLabelContainer> {
    unsigned long long _type;
    BOOL _extraSpacing;
    _MKUILabel *_label;
    NSStackView *_updatingView;
    _MKUILabel *_updatingLabel;
    NSTimer *_updatingLabelTimestampRefreshTimer;
    NSTimer *_updatingViewRefreshTimer;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) MKButtonWithTargetArgument *button;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_font:(unsigned long long)a0;
+ (id)_buttonFont:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)multilineTextFieldsWithinContainer;
- (id)initWithType:(unsigned long long)a0 extraSpacing:(BOOL)a1;
- (id)initWithType:(unsigned long long)a0 extraSpacing:(BOOL)a1 reuseIdentifier:(id)a2;
- (id)_initWithType:(unsigned long long)a0 extraSpacing:(BOOL)a1 reuseIdentifier:(id)a2;

@end
