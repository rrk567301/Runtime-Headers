@class NSImage;

@interface ADMGuestUserConfig : NSObject {
    NSImage *mDefaultGuestPicture;
}

+ (long long)guestMode;
+ (id)sharedConfig;
+ (BOOL)_isFDEEnabled;
+ (void)setGuestEnabled:(BOOL)a0;
+ (BOOL)isGuestEnabled;
+ (void)syncGuestState;

- (void)dealloc;
- (id)init;
- (id)_generateGuestPassword;
- (id)findGuestAccount;
- (id)createGuestAccount;
- (void)setGuestAccountEnabled:(BOOL)a0;
- (BOOL)isGuestAccountEnabled;
- (id)_imageFromCGImage1x:(struct CGImage { } *)a0 andCGImage2x:(struct CGImage { } *)a1;
- (id)guestUserPicture;

@end
