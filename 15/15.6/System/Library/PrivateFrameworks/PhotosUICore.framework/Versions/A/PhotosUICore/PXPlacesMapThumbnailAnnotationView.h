@class PKExtendedTraitCollection, NSString, PXPlacesImageCache, UXImageView, PXPlacesMapThumbnailLocationCurator, UXLabel;

@interface PXPlacesMapThumbnailAnnotationView : MKAnnotationView <PXPlacesMapAnnotationViewFadable> {
    long long _geotaggablesCount;
}

@property (retain, nonatomic) PKExtendedTraitCollection *extendedTraitCollection;
@property (retain, nonatomic) id extendedTraitObserver;
@property (retain, nonatomic) UXLabel *countLabel;
@property (retain, nonatomic) UXImageView *countLabelBackgroundImageView;
@property (retain, nonatomic) PXPlacesImageCache *imageCache;
@property (nonatomic) char imageIsPlaceholder;
@property (readonly, nonatomic) long long countLabelStyle;
@property (copy, nonatomic) id /* block */ displayCompletion;
@property (weak, nonatomic) PXPlacesMapThumbnailLocationCurator *thumbnailLocationCurator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_thumbnailCreationOperationQueue;
+ (id)_thumbnailFetchOperationQueue;
+ (id)_thumbnailSelectionQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setImage:(id)a0;
- (void)setAnnotation:(id)a0;
- (void)setSelected:(char)a0 animated:(char)a1;
- (void)_hideCountLabel;
- (void)_showCountLabel;
- (void)_updatePlaceholderImageIfNeeded;
- (id)_countLabelBackgroundColor;
- (void)_fetchImageForGeotaggable:(id)a0 renderer:(id)a1 networkAccessAllowed:(char)a2;
- (void)_fetchImageWithNetworkAccessAllowed:(char)a0;
- (void)_processGeotaggable:(id)a0 withImage:(struct CGImage { } *)a1 popoverImageType:(long long)a2 imageOptions:(unsigned long long)a3 shouldCache:(char)a4 expectedGeotaggable:(id)a5;
- (void)_processPostImage;
- (void)_reloadCount:(long long)a0;
- (void)_reloadData:(char)a0;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1 extendedTraitCollection:(id)a2 imageCache:(id)a3 countLabelStyle:(long long)a4;
- (id)preferredGeotaggableWithFallbackGeotaggable:(id)a0;
- (id)primaryGeotaggable;
- (id)userCacheKey;

@end
