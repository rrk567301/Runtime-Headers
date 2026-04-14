@class NSImageView, NSString, NSClickGestureRecognizer, CALayer;

@interface IKCameraCollectionViewItem : NSCollectionViewItem <ICCameraDeviceDownloadDelegate> {
    NSImageView *_imageView;
}

@property (retain, nonatomic) NSClickGestureRecognizer *clickGestureRecognizer;
@property (retain, nonatomic) NSClickGestureRecognizer *doubleClick;
@property (retain, nonatomic) CALayer *selectedLayer;
@property (retain, nonatomic) CALayer *downloadedLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)prepareForReuse;
- (id)animationForKey:(id)a0;
- (BOOL)isSelectable;
- (void)setSelected:(BOOL)a0;
- (BOOL)isSelected;
- (void)setHighlightState:(long long)a0;
- (id)draggingImageComponents;
- (BOOL)isDownloaded;
- (void)onDoubleClick:(id)a0;
- (void)didDownloadFile:(id)a0 error:(id)a1 options:(id)a2 contextInfo:(void *)a3;
- (void)removeBadgeOnLayer:(unsigned long long)a0;
- (void)badgeIconWithImage:(id)a0 onLayer:(unsigned long long)a1;
- (void)uninstallGestureRecognizer;
- (void)toggleSelection:(id)a0;
- (void)enableDoubleClick;
- (void)disableDoubleClick;
- (void)updateDownloadBadge;
- (void)installGestureRecognizer;
- (void)updateBadgeLocation;

@end
