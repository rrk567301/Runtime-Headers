@class NSThemeDocumentButton, NSPathControl;

@interface NSThemeDocumentButtonPopUpMenuProxy : NSProxy {
    id realObject;
    NSThemeDocumentButton *documentButton;
    NSPathControl *pathControl;
}

- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (void)createRealObjectIfNeeded;
- (id)initWithDocumentButton:(id)a0;

@end
