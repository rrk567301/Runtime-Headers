@class NSString;

@interface TabDialogContentOverlayView : NSView <TabDialogView>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (void)fadeInWithCompletionHandler:(id /* block */)a0;
- (void)fadeOutWithCompletionHandler:(id /* block */)a0;

@end
