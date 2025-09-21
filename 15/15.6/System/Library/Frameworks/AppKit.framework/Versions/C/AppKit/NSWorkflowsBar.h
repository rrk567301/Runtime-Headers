@class NSTouchBar, NSFunctionRow;

@interface NSWorkflowsBar : NSObject {
    NSTouchBar *_touchBar;
    NSFunctionRow *_functionRow;
    char _isVisible;
    char _isEnabled;
}

@property (retain) NSTouchBar *touchBar;
@property (readonly, getter=isEnabled) char enabled;
@property (readonly, getter=isVisible) char visible;

+ (char)accessInstanceVariablesDirectly;
+ (char)automaticallyNotifiesObserversOfEnabled;
+ (char)automaticallyNotifiesObserversOfTouchBar;
+ (char)automaticallyNotifiesObserversOfVisible;
+ (id)sharedWorkflowsBar;

- (void)dealloc;
- (id)init;
- (void)_placementVisibilityDidChange;
- (void)_presentationModeConfigurationDidChange;

@end
