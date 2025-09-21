@interface _FBDarkBootHelper : NSObject

- (void)setNextBootDark;
- (void)clearBootedDark;
- (void)_setDarkBootEnabled:(char)a0;
- (char)isBootingDark;

@end
