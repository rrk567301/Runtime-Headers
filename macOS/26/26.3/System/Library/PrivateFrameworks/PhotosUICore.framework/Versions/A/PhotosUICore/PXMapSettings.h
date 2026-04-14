@interface PXMapSettings : PXSettings

@property (nonatomic) BOOL enableCuratedPlacesAlbumSnapshot;

+ (id)sharedInstance;

- (id)parentSettings;
- (void)setDefaultValues;

@end
