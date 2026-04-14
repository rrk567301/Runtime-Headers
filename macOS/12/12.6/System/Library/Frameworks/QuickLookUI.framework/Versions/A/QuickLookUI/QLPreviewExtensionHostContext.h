@class QLPreviewExtensionDisplayBundle;

@interface QLPreviewExtensionHostContext : NSExtensionContext

@property (weak) QLPreviewExtensionDisplayBundle *displayBundle;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)doubleClickOnPreviewContent;
- (void)updateFullScreenFromMagnification:(double)a0;

@end
