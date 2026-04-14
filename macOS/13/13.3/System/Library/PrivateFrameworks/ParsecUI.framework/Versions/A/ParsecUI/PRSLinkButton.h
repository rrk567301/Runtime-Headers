@class NSURL;

@interface PRSLinkButton : NSButton

@property NSURL *linkURL;

- (BOOL)isAccessibilityElement;
- (void)mouseDown:(id)a0;

@end
