@class NSString;

@interface AXPHostCacheOverlayView : NSView

@property (retain, nonatomic) NSString *deviceIdentifier;
@property (nonatomic) struct CGSize { double width; double height; } deviceSize;

- (void).cxx_destruct;
- (unsigned int)_displayID;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (id)accessibilitySubrole;
- (char)isAccessibilityElement;
- (char)isAccessibilityEnabled;
- (char)_accessibilityClientIsRequestingRemoteDeviceContent;
- (id)_accessibilityTranslationAppElement;
- (struct CGPoint { double x0; double x1; })_screenPointToDevicePoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_verticallyFlipPoint:(struct CGPoint { double x0; double x1; })a0;

@end
