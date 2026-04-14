@class OADDrawable;

@interface WDOfficeArt : WDRunWithCharacterProperties {
    OADDrawable *mDrawable;
    BOOL mFloating;
}

+ (int)textBoxTextTypeForRegularTextType:(int)a0;

- (id)description;
- (void).cxx_destruct;
- (void)clearDrawable;
- (id)imageData;
- (BOOL)isFloating;
- (void)setFloating:(BOOL)a0;
- (id)imageName;
- (id)drawable;
- (void)setDrawable:(id)a0;
- (id)initWithParagraph:(id)a0;
- (int)runType;
- (id)overrideDrawable;
- (BOOL)isDrawableOverridden;
- (id)imageBlipRef;
- (void)setImageBlipRef:(id)a0;
- (void)setTextType:(int)a0 recursivelyToDrawable:(id)a1;
- (void)propagateTextTypeToDrawables;
- (void)checkForFloating:(id)a0;

@end
