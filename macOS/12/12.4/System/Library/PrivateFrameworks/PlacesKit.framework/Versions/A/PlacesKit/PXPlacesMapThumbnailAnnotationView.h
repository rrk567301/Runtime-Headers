@class PKExtendedTraitCollection, NSString, PXPlacesImageCache, UXImageView, UXLabel;

@interface PXPlacesMapThumbnailAnnotationView : MKAnnotationView <PXPlacesMapAnnotationViewFadable> {
    long long _geotaggablesCount;
}

@property (retain, nonatomic) PKExtendedTraitCollection *extendedTraitCollection;
@property (retain, nonatomic) id extendedTraitObserver;
@property (retain, nonatomic) UXLabel *countLabel;
@property (retain, nonatomic) UXImageView *countLabelBackgroundImageView;
@property (retain, nonatomic) PXPlacesImageCache *imageCache;
@property (nonatomic) BOOL imageIsPlaceholder;
@property (copy, nonatomic) id /* block */ displayCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_thumbnailFetchOperationQueue;
+ (id)_thumbnailCreationOperationQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setImage:(id)a0;
- (void)setAnnotation:(id)a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)_countLabelBackgroundColor;
- (void)_reloadData:(BOOL)a0;
- (void)_hideCountLabel;
- (id)primaryGeotaggable;
- (id)userCacheKey;
- (void)_reloadCount:(long long)a0;
- (void)_fetchImageWithNetworkAccessAllowed:(BOOL)a0;
- (void)_processPlaceHolderForGeotaggable:(id)a0;
- (void)_processPostImage;
- (void)_processGeotaggable:(id)a0 withImage:(struct CGImage { } *)a1 popoverImageType:(unsigned long long)a2 imageOptions:(unsigned long long)a3 shouldCache:(BOOL)a4;
- (void)_updatePlaceholderImageIfNeeded;
- (void)_showCountLabel;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1 extendedTraitCollection:(id)a2 imageCache:(id)a3;

@end
