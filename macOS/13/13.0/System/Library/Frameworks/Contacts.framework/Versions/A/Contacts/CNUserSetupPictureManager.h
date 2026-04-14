@interface CNUserSetupPictureManager : NSObject

+ (id)log;
+ (id)userSetupPictureData;
+ (BOOL)hasUserSetupPictureData;
+ (id)userSetupPictureFilePath;
+ (id)userSetupPicturePath;
+ (BOOL)userSetupPictureDataIsFresh;
+ (BOOL)clearUserSetupPictureData;

@end
