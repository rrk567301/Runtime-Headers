@class OADDrawable;

@interface WDOfficeArt : WDRunWithCharacterProperties {
    OADDrawable *mDrawable;
    BOOL mFloating;
}

+ (int)textBoxTextTypeForRegularTextType:(int)a0;

- (id)imageData;
- (id)imageName;
- (BOOL)isFloating;
- (void).cxx_destruct;
- (id)description;
- (void)setFloating:(BOOL)a0;
- (void)clearDrawable;
- (id)initWithParagraph:(id)a0;
- (id)drawable;
- (int)runType;
- (void)checkForFloating:(id)a0;
- (id)imageBlipRef;
- (BOOL)isDrawableOverridden;
- (id)overrideDrawable;
- (void)propagateTextTypeToDrawables;
- (void)setDrawable:(id)a0;
- (void)setImageBlipRef:(id)a0;
- (void)setTextType:(int)a0 recursivelyToDrawable:(id)a1;

@end
