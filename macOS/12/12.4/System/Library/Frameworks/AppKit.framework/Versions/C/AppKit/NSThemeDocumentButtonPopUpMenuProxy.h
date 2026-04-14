@class NSThemeDocumentButton, NSPathControl;

@interface NSThemeDocumentButtonPopUpMenuProxy : NSProxy {
    id realObject;
    NSThemeDocumentButton *documentButton;
    NSPathControl *pathControl;
}

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)initWithDocumentButton:(id)a0;
- (void)createRealObjectIfNeeded;

@end
