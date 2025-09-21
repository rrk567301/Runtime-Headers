@class NSString, NSImage;

@interface ACDEAuthenticationRequestImpl : ACMBaseAuthenticationRequestImpl {
    NSString *_signInDialogTitle;
    NSString *_signInDialogDescription;
    NSImage *logoImage;
    char _forceAppModal;
}

@end
