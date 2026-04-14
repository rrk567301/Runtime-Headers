@class NSThemeDocumentButton, NSPathControl;

@interface NSThemeDocumentButtonPopUpMenuProxy : NSProxy {
    id realObject;
    NSThemeDocumentButton *documentButton;
    NSPathControl *pathControl;
}

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (void)createRealObjectIfNeeded;
- (id)initWithDocumentButton:(id)a0;

@end
