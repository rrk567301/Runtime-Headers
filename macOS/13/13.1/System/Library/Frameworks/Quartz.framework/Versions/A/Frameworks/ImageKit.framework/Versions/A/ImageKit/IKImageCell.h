@interface IKImageCell : NSObject {
    id _reserved;
}

+ (void)setTrackingOfRequestingViewsEnabled:(BOOL)a0;
+ (BOOL)trackingOfRequestingViewsEnabled;
+ (void)setDelegatesImageManagementToDatasource:(BOOL)a0;
+ (BOOL)delegatesImageManagementToDatasource;
+ (id)currentRequestingViewIdentifier;
+ (BOOL)allowsIconSharingForThumbnailRequest:(id)a0;
+ (void)setCurrentRequestingViewIdentifier:(id)a0;

- (void)dealloc;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)invalidate;
- (unsigned long long)version;
- (id)image;
- (id)parent;
- (id)dataSource;
- (void)setDataSource:(id)a0;
- (void)reloadData;
- (void)setAlpha:(float)a0;
- (float)alpha;
- (id)previewItemURL;
- (id)previewItemTitle;
- (id)representedItem;
- (id)thumbnailImage;
- (void)setParent:(id)a0;
- (id)titleString;
- (id)subtitleString;
- (void)datasourceItemDidChange;
- (void)imageDidChange;
- (void)didRecoverImageFromCache;
- (void)parentWillDie:(id)a0;
- (unsigned long long)indexOfRepresentedItem;
- (void)validateDatasource;
- (id)initWithConcreteInstance:(id)a0;
- (id)cacheDatabase;
- (unsigned long long)_createNewEntryInCache:(id)a0;
- (unsigned long long)cacheIndexValidateIfNeeded:(BOOL)a0;
- (unsigned long long)cacheIndex;
- (void)setSourceUID:(id)a0;
- (BOOL)_shareIconIfPossible:(id)a0;
- (BOOL)shareIconIfPossible:(id)a0;
- (BOOL)_shareIconRef:(struct OpaqueIconRef { } *)a0;
- (BOOL)canDisplayInlinePreview;
- (void)setLastRenderedSize:(int)a0;
- (int)lastRenderedSize;
- (id)sourceUID;
- (unsigned long long)dataSourceIndex;
- (void)setDataSourceIndex:(unsigned long long)a0;
- (BOOL)isAnIcon;
- (BOOL)datasourceIsParsed;
- (int)bestImageSizeForRenderingSize:(struct CGSize { double x0; double x1; })a0 renderLevel:(int)a1 renderType:(unsigned int)a2;
- (id)imageWrapperForType:(id)a0 representation:(id)a1;
- (BOOL)_representationTypeCanBePlayed:(id)a0;
- (BOOL)imageIsImported;
- (void)setContentCanBePlayed:(BOOL)a0;
- (id)dataSourceImageRepresentationType;
- (id)dataSourceURL;
- (id)dataSourcePath;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inlinePreviewFrameForImageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)inlinePreviewQuickLookProperties;
- (id)_delegatedImageToDraw;

@end
