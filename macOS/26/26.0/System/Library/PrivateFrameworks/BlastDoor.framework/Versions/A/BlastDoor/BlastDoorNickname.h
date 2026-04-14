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

- (id)init;
- (void).cxx_destruct;

@end
