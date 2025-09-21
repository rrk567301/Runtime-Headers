@class NSString;

@interface MKAppleLogoImageView : NSImageView <MKAppleLogoView>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logoForMapType:(unsigned long long)a0 forDarkMode:(char)a1;

- (void)setImage:(id)a0;
- (id)initForMapType:(unsigned long long)a0 forDarkMode:(char)a1;
- (void)updateForMapType:(unsigned long long)a0 darkMode:(char)a1;

@end
