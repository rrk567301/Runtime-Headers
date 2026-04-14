@interface IKImageCell : NSObject {
    id _reserved;
}

+ (BOOL)delegatesImageManagementToDatasource;
+ (BOOL)trackingOfRequestingViewsEnabled;
+ (void)setCurrentRequestingViewIdentifier:(id)a0;
+ (void)setTrackingOfRequestingViewsEnabled:(BOOL)a0;
+ (void)setDelegatesImageManagementToDatasource:(BOOL)a0;
+ (BOOL)allowsIconSharingForThumbnailRequest:(id)a0;
+ (id)currentRequestingViewIdentifier;

- (void)dealloc;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)invalidate;
- (unsigned long long)version;
- (id)image;
- (id)parent;
- (id)dataSource;
- (void)reloadData;
- (void)setDataSource:(id)a0;
- (float)alpha;
- (void)setAlpha:(float)a0;
- (id)representedItem;
- (id)previewItemURL;
- (id)previewItemTitle;
- (id)thumbnailImage;
- (void)setParent:(id)a0;
- (id)titleString;
- (id)subtitleString;
- (id)sourceUID;
- (void)setSourceUID:(id)a0;
- (unsigned long long)cacheIndex;
- (unsigned long long)dataSourceIndex;
- (void)validateDatasource;
- (BOOL)shareIconIfPossible:(id)a0;
- (void)imageDidChange;
- (BOOL)isAnIcon;
- (id)initWithConcreteInstance:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inlinePreviewFrameForImageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)bestImageSizeForRenderingSize:(struct CGSize { double x0; double x1; })a0 renderLevel:(int)a1 renderType:(unsigned int)a2;
- (id)_delegatedImageToDraw;
- (BOOL)imageIsImported;
- (void)setLastRenderedSize:(int)a0;
- (void)parentWillDie:(id)a0;
- (id)dataSourcePath;
- (unsigned long long)indexOfRepresentedItem;
- (void)datasourceItemDidChange;
- (void)didRecoverImageFromCache;
- (void)setDataSourceIndex:(unsigned long long)a0;
- (id)dataSourceImageRepresentationType;
- (BOOL)datasourceIsParsed;
- (unsigned long long)cacheIndexValidateIfNeeded:(BOOL)a0;
- (BOOL)_shareIconRef:(struct OpaqueIconRef { } *)a0;
- (int)lastRenderedSize;
- (id)cacheDatabase;
- (BOOL)_shareIconIfPossible:(id)a0;
- (BOOL)_representationTypeCanBePlayed:(id)a0;
- (void)setContentCanBePlayed:(BOOL)a0;
- (unsigned long long)_createNewEntryInCache:(id)a0;
- (id)imageWrapperForType:(id)a0 representation:(id)a1;
- (id)dataSourceURL;
- (BOOL)canDisplayInlinePreview;
- (id)inlinePreviewQuickLookProperties;

@end
