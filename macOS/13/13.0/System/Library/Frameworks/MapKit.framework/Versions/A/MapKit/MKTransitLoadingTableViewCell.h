@class NSProgressIndicator, _MKUILabel;

@interface MKTransitLoadingTableViewCell : MKCustomSeparatorCell {
    _MKUILabel *_loadingLabel;
    NSProgressIndicator *_loadingIndicator;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)startAnimating;
- (void)stopAnimating;

@end
