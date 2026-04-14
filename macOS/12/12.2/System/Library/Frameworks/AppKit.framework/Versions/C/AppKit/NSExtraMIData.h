@class NSString, _NSBindingAdaptor, NSImage, NSMenuItemViewer, NSAttributedString, NSFont;

@interface NSExtraMIData : NSObject {
    NSAttributedString *attributedTitle;
    NSString *tooltip;
    _NSBindingAdaptor *bindingAdaptor;
    NSMenuItemViewer *menuItemViewer;
    NSImage *onStateImage;
    NSImage *offStateImage;
    NSImage *mixedStateImage;
    NSFont *font;
    NSImage *_image;
    NSImage *highlightedImage;
    struct CGSize { double width; double height; } imageSize;
    NSString *userKE;
    NSString *kbdKE;
    NSString *keInputSourceIdentifier;
    NSString *keDisplayOverride;
    unsigned char kbdKEMask;
    struct CGSize { double width; double height; } cachedAttributedTitleSize;
    long long cachedAttributedTitleHeightForDrawing;
    BOOL attributedTitleHasAttachment;
    unsigned short virtualKeyCode;
    unsigned short defaultKEPriority;
    unsigned char userKEMask;
    unsigned long long newItemsCount;
    id /* block */ actionBlock;
}

- (id)init;

@end
