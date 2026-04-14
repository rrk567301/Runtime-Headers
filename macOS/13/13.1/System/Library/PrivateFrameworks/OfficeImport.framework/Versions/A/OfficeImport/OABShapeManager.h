@class NSString;

@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager> {
    void *mShape;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hidden;
- (id)initWithShape:(void *)a0;
- (BOOL)isFilled;
- (BOOL)isStroked;
- (BOOL)isShadowed;
- (BOOL)isFillOK;
- (BOOL)isStrokeOK;
- (BOOL)isShadowOK;
- (BOOL)isTextPath;
- (id)textPathUnicodeString;
- (int)textPathTextAlignment;
- (int)textPathFontSize;
- (id)textPathFontFamily;
- (BOOL)textPathBold;
- (BOOL)textPathItalic;
- (BOOL)textPathUnderline;
- (BOOL)textPathSmallcaps;
- (BOOL)textPathStrikethrough;
- (id)initWithShape:(void *)a0 masterShape:(void *)a1;

@end
