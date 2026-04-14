@class NSString;
@protocol VKCLookupButtonDelegate;

@interface VKCLookupButton : VKCTappableView <NSAccessibilityButton>

@property (weak, nonatomic) id<VKCLookupButtonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (id)menuForEvent:(id)a0;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)accessibilityPerformPress;
- (void)resetCursorRects;

@end
