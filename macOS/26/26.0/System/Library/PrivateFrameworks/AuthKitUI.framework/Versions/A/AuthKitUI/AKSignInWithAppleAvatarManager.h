@interface AKSignInWithAppleAvatarManager : NSObject

+ (id)avatarImageForPrimaryAccountOwnerWithDiameter:(double)a0;
+ (void)avatarImageForPrimaryAccountOwnerWithDiameter:(double)a0 completion:(id /* block */)a1;
+ (id)avatarImageForUserHandle:(id)a0 diameter:(double)a1;
+ (void)avatarImageForUserHandle:(id)a0 diameter:(double)a1 completion:(id /* block */)a2;
+ (id)placeholderAvatarImageForPrimaryAccountOwnerWithDiameter:(double)a0;

@end
