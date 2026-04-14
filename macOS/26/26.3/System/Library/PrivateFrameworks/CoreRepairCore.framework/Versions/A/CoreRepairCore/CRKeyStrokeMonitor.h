@class HIDEventSystemClient, NSMutableDictionary, NSArray;

@interface CRKeyStrokeMonitor : NSObject

@property (retain) HIDEventSystemClient *client;
@property (retain) NSMutableDictionary *pressedKeys;
@property (retain) NSArray *gestureKeys;
@property BOOL triggered;
@property (copy) id /* block */ callback;
@property BOOL verbose;

+ (id)physicalIntentGestureKeys;

- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)handleKeyboardEvent:(id)a0 event:(id)a1;
- (id)initWithGestureKeys:(id)a0 callback:(id /* block */)a1;

@end
