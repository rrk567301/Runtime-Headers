@class NSTouchBar, NSFunctionRow;

@interface NSWorkflowsBar : NSObject {
    NSTouchBar *_touchBar;
    NSFunctionRow *_functionRow;
    BOOL _isVisible;
    BOOL _isEnabled;
}

@property (retain) NSTouchBar *touchBar;
@property (readonly, getter=isEnabled) BOOL enabled;
@property (readonly, getter=isVisible) BOOL visible;

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)sharedWorkflowsBar;
+ (BOOL)automaticallyNotifiesObserversOfTouchBar;
+ (BOOL)automaticallyNotifiesObserversOfVisible;
+ (BOOL)automaticallyNotifiesObserversOfEnabled;

- (void)dealloc;
- (id)init;
- (void)_presentationModeConfigurationDidChange;
- (void)_placementVisibilityDidChange;

@end
