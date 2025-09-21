@interface PXMapSettings : PXSettings

@property (nonatomic) char enableCuratedPlacesAlbumSnapshot;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;

@end
