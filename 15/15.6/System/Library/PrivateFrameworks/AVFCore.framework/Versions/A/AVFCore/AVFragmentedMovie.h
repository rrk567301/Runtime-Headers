@class NSArray;

@interface AVFragmentedMovie : AVMovie <AVFragmentMinding>

@property (readonly, nonatomic) NSArray *tracks;
@property (readonly, nonatomic, getter=isAssociatedWithFragmentMinder) char associatedWithFragmentMinder;

+ (char)expectsPropertyRevisedNotifications;

- (id)initWithURL:(id)a0 options:(id)a1;
- (id)tracksWithMediaType:(id)a0;
- (char)_mindsFragments;
- (char)_needsLegacyChangeNotifications;
- (Class)_classForMovieTracks;
- (void)_setIsAssociatedWithFragmentMinder:(char)a0;
- (id)trackWithTrackID:(int)a0;
- (id)tracksWithMediaCharacteristic:(id)a0;

@end
