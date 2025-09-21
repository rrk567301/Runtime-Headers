@class NSString;

@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager> {
    void *mShape;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithShape:(void *)a0;
- (char)hidden;
- (id)initWithShape:(void *)a0 masterShape:(void *)a1;
- (char)isFillOK;
- (char)isFilled;
- (char)isShadowOK;
- (char)isShadowed;
- (char)isStrokeOK;
- (char)isStroked;
- (char)isTextPath;
- (char)textPathBold;
- (id)textPathFontFamily;
- (int)textPathFontSize;
- (char)textPathItalic;
- (char)textPathSmallcaps;
- (char)textPathStrikethrough;
- (int)textPathTextAlignment;
- (char)textPathUnderline;
- (id)textPathUnicodeString;

@end
