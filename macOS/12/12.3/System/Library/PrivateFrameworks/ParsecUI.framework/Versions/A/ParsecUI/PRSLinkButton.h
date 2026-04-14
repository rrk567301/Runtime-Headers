@class NSURL;

@interface PRSLinkButton : NSButton

@property NSURL *linkURL;

- (void)mouseDown:(id)a0;
- (BOOL)isAccessibilityElement;

@end
