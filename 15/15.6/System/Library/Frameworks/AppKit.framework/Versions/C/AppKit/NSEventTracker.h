@class NSEvent;

@interface NSEventTracker : NSObject

@property (retain) NSEvent *currentEvent;
@property unsigned long long deviceID;
@property unsigned long long phase;
@property unsigned long long modifierFlags;
@property char wantsEventCoalescing;
@property char wantsPeriodicCallbacks;
@property char wantsKeyboardEvents;

- (void)dealloc;
- (void)trackEvent:(id)a0 usingHandler:(id /* block */)a1;

@end
