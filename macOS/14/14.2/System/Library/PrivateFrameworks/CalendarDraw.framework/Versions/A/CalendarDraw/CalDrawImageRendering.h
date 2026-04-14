@interface CalDrawImageRendering : NSObject

+ (id)imageWithCGImage:(struct CGImage { } *)a0;
+ (id)cachedOccurrenceImageForCalendarColor:(id)a0 tileOptions:(id)a1;
+ (id)eventIcon:(id)a0 withName:(id)a1 withColor:(id)a2;
+ (id)smallDotImage:(id)a0;
+ (id)smallSelectedDotImage:(id)a0;
+ (id)_cachedImageForCalendarColor:(id)a0 options:(id)a1;
+ (id)_imageForBarColor:(id)a0 backgroundColor:(id)a1 options:(id)a2;
+ (id)_imageForBarColor:(id)a0 backgroundColor:(id)a1 stripeColor:(id)a2 stripedImageAlpha:(double)a3 options:(id)a4;
+ (struct CGImage { } *)_imageForBarColor:(id)a0 backgroundColor:(id)a1 stripeColor:(id)a2 stripedImageAlpha:(double)a3 scaleFactor:(double)a4 options:(id)a5;
+ (id)_imageWithName:(id)a0 andCalColor:(id)a1;
+ (id)_imageWithName:(id)a0 andColor:(id)a1;
+ (id)_stripeColorForColor:(id)a0 darkBackground:(BOOL)a1;
+ (id)allDayInvitationOutlineFlatBothWithColor:(id)a0;
+ (id)allDayInvitationOutlineFlatLeftWithColor:(id)a0;
+ (id)allDayInvitationOutlineFlatRightWithColor:(id)a0;
+ (id)allDayInvitationOutlineWithColor:(id)a0;
+ (double)backgroundAlphaForCalendarColor:(id)a0 darkBackground:(BOOL)a1;
+ (id)cachedImageForOccurrenceColor:(id)a0 height:(double)a1 pathRadius:(double)a2 alpha:(double)a3 options:(id)a4 category:(id)a5;
+ (id)cachedImageForOccurrenceColor:(id)a0 options:(id)a1;
+ (id)createSmallImageWithSymbolName:(id)a0 color:(id)a1;
+ (id)dotImageForOccurrenceColor:(id)a0 diameter:(double)a1 strokeWidth:(double)a2 options:(id)a3;
+ (id)imageWithName:(id)a0 andType:(id)a1;
+ (id)lightColorForColor:(id)a0 alphaValue:(double)a1;
+ (struct CGImage { } *)newCGImageForOccurrenceColor:(id)a0 height:(double)a1 pathRadius:(double)a2 alpha:(double)a3 options:(id)a4;
+ (id)oldTentativeOutlineWithColor:(id)a0;
+ (void)pushRoundedRectPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 withCornerRadius:(double)a2;
+ (id)tentativeCornersWithColor:(id)a0;
+ (id)tentativeOutlineWithColor:(id)a0;

@end
