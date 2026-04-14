@class NSString, BlastDoorWallpaper, NSData, BlastDoorMorphology, BlastDoorAvatarImage;

@interface BlastDoorNickname : NSObject {
    void /* unknown type, empty encoding */ nickname;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) BlastDoorAvatarImage *avatar;
@property (nonatomic, readonly) BlastDoorWallpaper *wallpaper;
@property (nonatomic, readonly) BlastDoorMorphology *pronouns;
@property (nonatomic, readonly) NSData *avatarRecipe;

- (void).cxx_destruct;
- (id)init;

@end
