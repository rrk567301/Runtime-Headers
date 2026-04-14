@class NSString, CNWallpaper, NSData, CNContactImage;

@interface ContactsUICore.MeCardSharingResult : NSObject <CNMeCardSharingResult> {
    void /* function */ givenName;
    void /* function */ familyName;
    void /* function */ avatarRecipeData;
    void /* function */ watchWallpaperImageData;
}

@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, copy) NSData *avatarRecipeData;
@property (nonatomic, retain) CNContactImage *contactImage;
@property (nonatomic, retain) CNWallpaper *wallpaper;
@property (nonatomic, copy) NSData *watchWallpaperImageData;
@property (nonatomic) BOOL didSaveImageToMeCard;

- (id)init;
- (void).cxx_destruct;

@end
