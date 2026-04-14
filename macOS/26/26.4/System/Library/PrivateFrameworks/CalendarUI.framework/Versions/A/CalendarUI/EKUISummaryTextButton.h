@class NSString;
@protocol EKUISummary;

@interface EKUISummaryTextButton : EKUIResizingTextField <NSAccessibilityButton>

@property (weak) id<EKUISummary> gadget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (BOOL)allowsVibrancy;
- (id)accessibilityHelp;
- (BOOL)accessibilityPerformPress;

@end
