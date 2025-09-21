@class NSString;

@interface AXPHostCacheOverlayView : NSView

@property (retain, nonatomic) NSString *deviceIdentifier;
@property (nonatomic) struct CGSize { double width; double height; } deviceSize;

- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned int)_displayID;
- (id)accessibilityChildren;
- (id)accessibilitySubrole;
- (BOOL)isAccessibilityEnabled;
- (BOOL)_accessibilityClientIsRequestingRemoteDeviceContent;
- (id)_accessibilityTranslationAppElement;
- (struct CGPoint { double x0; double x1; })_screenPointToDevicePoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_verticallyFlipPoint:(struct CGPoint { double x0; double x1; })a0;

@end
