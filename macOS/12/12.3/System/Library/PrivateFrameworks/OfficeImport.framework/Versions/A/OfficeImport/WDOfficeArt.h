@class OADDrawable;

@interface WDOfficeArt : WDRunWithCharacterProperties {
    OADDrawable *mDrawable;
    BOOL mFloating;
}

+ (int)textBoxTextTypeForRegularTextType:(int)a0;

- (id)description;
- (void).cxx_destruct;
- (id)imageData;
- (void)clearDrawable;
- (id)imageName;
- (void)setFloating:(BOOL)a0;
- (BOOL)isFloating;
- (int)runType;
- (void)checkForFloating:(id)a0;
- (id)drawable;
- (id)initWithParagraph:(id)a0;
- (BOOL)isDrawableOverridden;
- (void)setDrawable:(id)a0;
- (void)setTextType:(int)a0 recursivelyToDrawable:(id)a1;
- (id)overrideDrawable;
- (id)imageBlipRef;
- (void)setImageBlipRef:(id)a0;
- (void)propagateTextTypeToDrawables;

@end
