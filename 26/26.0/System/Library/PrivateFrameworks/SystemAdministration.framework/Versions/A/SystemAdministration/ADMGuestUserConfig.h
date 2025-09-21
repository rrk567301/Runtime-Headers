@class NSImage;

@interface ADMGuestUserConfig : NSObject {
    NSImage *mDefaultGuestPicture;
}

+ (id)sharedConfig;
+ (long long)guestMode;
+ (BOOL)_isFDEEnabled;
+ (BOOL)isGuestEnabled;
+ (void)setGuestEnabled:(BOOL)a0;
+ (void)syncGuestState;

- (void)dealloc;
- (id)init;
- (id)_imageFromCGImage1x:(struct CGImage { } *)a0 andCGImage2x:(struct CGImage { } *)a1;
- (id)_generateGuestPassword;
- (id)createGuestAccount;
- (id)findGuestAccount;
- (id)guestUserPicture;
- (BOOL)isGuestAccountEnabled;
- (void)setGuestAccountEnabled:(BOOL)a0;

@end
