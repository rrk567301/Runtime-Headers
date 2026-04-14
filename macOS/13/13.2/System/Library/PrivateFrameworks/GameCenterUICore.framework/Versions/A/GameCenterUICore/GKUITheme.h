@class NSCache, GKNetworkImageSource, NSImage;

@interface GKUITheme : NSObject {
    NSCache *_resourceCache;
}

@property (retain, nonatomic) NSCache *resourceCache;
@property (readonly, retain, nonatomic) GKNetworkImageSource *macGameIconSource;
@property (readonly, retain, nonatomic) GKNetworkImageSource *photoListSource;
@property (readonly, retain, nonatomic) GKNetworkImageSource *photoDetailSource;
@property (readonly, retain, nonatomic) GKNetworkImageSource *iconLeaderboardListSource;
@property (readonly, retain, nonatomic) GKNetworkImageSource *iconLeaderboardSetListSource;
@property (readonly, nonatomic) GKNetworkImageSource *untreatedAchievementImageSource;
@property (readonly, nonatomic) GKNetworkImageSource *untreatedAchievementImageDetailSource;
@property (readonly, retain, nonatomic) NSImage *ratingStarsBackgroundImage;
@property (readonly, retain, nonatomic) NSImage *ratingStarsForegroundImage;
@property (readonly, retain, nonatomic) NSImage *interactiveRatingStarsForeground;
@property (readonly, retain, nonatomic) NSImage *interactiveRatingStarsBackground;

+ (id)sharedTheme;
+ (id)themeForGame:(id)a0;
+ (id)resourceCache;

- (id)init;
- (void).cxx_destruct;
- (id)_catalogImageWithName:(id)a0 bundle:(id)a1;
- (id)imageNamed:(id)a0;
- (id)achievementsDefaultIcon;
- (id)achievementsNotStartedIcon;
- (id)statusDotImage;
- (id)avatarSourceWithDimension:(long long)a0;
- (id)monogramSourceWithDimension:(long long)a0;
- (id)groupImageSourceWithDimension:(long long)a0;
- (id)placeholderSourceWithDimension:(long long)a0;
- (id)defaultPlayerPhoto;
- (id)secondaryLabelCompositingFilter;
- (id)playerPickerSelectedImage;
- (id)playerPickerUnselectedImage;
- (id)eventIconImage;
- (BOOL)useStandardControls;
- (void)clearResourceCache;
- (id)messagesInviteBackgroundImage;
- (id)defaultLeaderboardIcon;
- (id)removePlayerButtonImage;
- (id)contactsCircleImage;
- (id)resourceForSelector:(SEL)a0 missingHandler:(id /* block */)a1;
- (id)resourceWithName:(id)a0 missingHandler:(id /* block */)a1;

@end
