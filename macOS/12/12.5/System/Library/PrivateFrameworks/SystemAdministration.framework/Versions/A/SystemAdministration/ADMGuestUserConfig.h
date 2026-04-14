@class NSImage;

@interface ADMGuestUserConfig : NSObject {
    NSImage *mDefaultGuestPicture;
}

+ (long long)guestMode;
+ (id)sharedConfig;
+ (BOOL)_isFDEEnabled;
+ (BOOL)isGuestEnabled;
+ (void)setGuestEnabled:(BOOL)a0;
+ (void)syncGuestState;

- (void)dealloc;
- (id)init;
- (BOOL)isGuestAccountEnabled;
- (void)setGuestAccountEnabled:(BOOL)a0;
- (id)findGuestAccount;
- (id)createGuestAccount;
- (id)_generateGuestPassword;
- (id)guestUserPicture;
- (id)_imageFromCGImage1x:(struct CGImage { } *)a0 andCGImage2x:(struct CGImage { } *)a1;

@end
