@class NSString, PXVideoContentProviderLoadingResult;

@interface PXSimpleVideoContentProvider : PXVideoContentProvider {
    PXVideoContentProviderLoadingResult *_loadingResult;
    NSString *_contentIdentifier;
    double _loadingProgress;
}

- (id)contentIdentifier;
- (void)setLoadingProgress:(double)a0;
- (void).cxx_destruct;
- (id)description;
- (double)loadingProgress;
- (id)init;
- (void)beginLoadingWithPriority:(long long)a0;
- (id)initWithPlayerItem:(id)a0 contentIdentifier:(id)a1;
- (id)loadingResult;
- (void)setLoadingResult:(id)a0;

@end
