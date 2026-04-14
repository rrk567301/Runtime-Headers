@class NSFont, NSString, _NSBindingAdaptor, NSImage, NSMenuItemBadge, NSAttributedString, NSMenuItemViewer;

@interface NSExtraMIData : NSObject {
    NSAttributedString *attributedTitle;
    NSString *subtitle;
    NSString *tooltip;
    NSMenuItemBadge *badge;
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
    unsigned long long cachedTitleHashForMeasurement;
    unsigned long long cachedFontHashForMeasurement;
    BOOL attributedTitleHasAttachment;
    unsigned short virtualKeyCode;
    unsigned short defaultKEPriority;
    unsigned char userKEMask;
    unsigned long long newItemsCount;
    id /* block */ actionBlock;
    BOOL scaleDownImageToFit;
    BOOL shouldRemoveNewlines;
}

- (id)init;

@end
