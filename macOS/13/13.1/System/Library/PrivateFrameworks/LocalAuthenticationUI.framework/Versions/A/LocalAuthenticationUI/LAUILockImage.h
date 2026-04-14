@interface LAUILockImage : NSObject

+ (id)_imageCache;
+ (id)lockImageWithStyle:(long long)a0 active:(BOOL)a1;
+ (id)_imageForSytle:(long long)a0 active:(BOOL)a1;
+ (id)_renderImageFromData:(struct { struct { char x0[100]; int x1; int x2; } x0[3]; unsigned char x1; })a0 active:(BOOL)a1;
+ (id)_renderImageFromLayer:(struct { char x0[100]; int x1; int x2; } *)a0 active:(BOOL)a1;
+ (id)_tintColor:(int)a0;
+ (id)_imageNamed:(id)a0 withTint:(id)a1;
+ (id)_composeLayeredImage:(id)a0;

@end
