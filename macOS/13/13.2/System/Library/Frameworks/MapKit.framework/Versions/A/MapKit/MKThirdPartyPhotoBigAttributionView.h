@class NSString, _MKUILabel, NSView;

@interface MKThirdPartyPhotoBigAttributionView : MKPhotoBigAttributionView <MKPhotoBigAttributionViewSubclass> {
    _MKUILabel *_firstLineLabel;
    _MKUILabel *_secondLineLabel;
    NSView *_labelsView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(long long)a0;
- (void)didUpdateMapItem;
- (void)didUpdateAttributionViewType;
- (void)didEndAnimatingActivityIndicatorView;
- (void)willStartAnimatingActivityIndicatorView;
- (void)updateInfoAttributionString;
- (id)firstLineLabelFont;
- (id)secondLineLabelFont;

@end
