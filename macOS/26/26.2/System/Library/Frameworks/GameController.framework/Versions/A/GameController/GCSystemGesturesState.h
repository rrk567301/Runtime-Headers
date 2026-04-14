@class NSString, NSSet;

@interface GCSystemGesturesState : NSObject

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSSet *disabledSystemGestureInputNames;
@property (retain, nonatomic) NSSet *enabledSystemGestureInputNames;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithEnabledSystemGestures:(id)a0 disabledSystemGestures:(id)a1 bundleIdentifier:(id)a2;

@end
