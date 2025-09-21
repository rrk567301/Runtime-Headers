@class NSView;

@interface NSAccessibilityRemoteUIElement : NSObject {
    struct __AXUIElement { } *_elementRef;
}

@property (retain) id windowUIElement;
@property (retain) id topLevelUIElement;
@property (weak) NSView *presenterView;

+ (void)setRemoteUIApp:(char)a0;
+ (char)isRemoteUIApp;
+ (void)registerRemoteUIProcessIdentifier:(int)a0;
+ (id)remoteTokenForLocalUIElement:(id)a0;
+ (void)unregisterRemoteUIProcessIdentifier:(int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (int)processIdentifier;
- (struct __AXUIElement { } *)AXUIElement;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (char)accessibilityIsAttributeSettable:(id)a0;
- (char)accessibilityIsIgnored;
- (id)initWithAXUIElement:(struct __AXUIElement { } *)a0;
- (id)initWithRemoteToken:(id)a0;

@end
