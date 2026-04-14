@class NSView;

@interface NSAccessibilityRemoteUIElement : NSObject {
    struct __AXUIElement { } *_elementRef;
}

@property (retain) id windowUIElement;
@property (retain) id topLevelUIElement;
@property (weak) NSView *presenterView;

+ (BOOL)isRemoteUIApp;
+ (void)setRemoteUIApp:(BOOL)a0;
+ (id)remoteTokenForLocalUIElement:(id)a0;
+ (void)registerRemoteUIProcessIdentifier:(int)a0;
+ (void)unregisterRemoteUIProcessIdentifier:(int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (int)processIdentifier;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (struct __AXUIElement { } *)AXUIElement;
- (id)initWithAXUIElement:(struct __AXUIElement { } *)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (id)initWithRemoteToken:(id)a0;

@end
