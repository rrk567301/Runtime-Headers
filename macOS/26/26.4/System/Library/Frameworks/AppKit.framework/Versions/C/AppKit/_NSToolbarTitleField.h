@protocol NSAccessibilityToolbarTitleActionDelegate;

@interface _NSToolbarTitleField : NSTextField

@property (weak) id<NSAccessibilityToolbarTitleActionDelegate> actionDelegate;

- (void).cxx_destruct;
- (id)accessibilityActionNames;
- (BOOL)accessibilityPerformPress;

@end
