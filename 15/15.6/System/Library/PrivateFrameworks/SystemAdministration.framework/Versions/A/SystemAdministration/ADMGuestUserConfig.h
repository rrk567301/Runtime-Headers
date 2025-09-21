@class NSImage;

@interface ADMGuestUserConfig : NSObject {
    NSImage *mDefaultGuestPicture;
}

+ (long long)guestMode;
+ (char)_isFDEEnabled;
+ (char)isGuestEnabled;
+ (void)setGuestEnabled:(char)a0;
+ (id)sharedConfig;
+ (void)syncGuestState;

- (void)dealloc;
- (id)init;
- (id)_generateGuestPassword;
- (id)_imageFromCGImage1x:(struct CGImage { } *)a0 andCGImage2x:(struct CGImage { } *)a1;
- (id)createGuestAccount;
- (id)findGuestAccount;
- (id)guestUserPicture;
- (char)isGuestAccountEnabled;
- (void)setGuestAccountEnabled:(char)a0;

@end
