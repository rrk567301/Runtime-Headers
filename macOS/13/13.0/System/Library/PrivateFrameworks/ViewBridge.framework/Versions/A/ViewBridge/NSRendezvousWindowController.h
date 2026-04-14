@class NSSet;

@interface NSRendezvousWindowController : NSServiceViewController {
    NSSet *_bridgeKeysObserved;
}

+ (void)addBridgeKeys:(id)a0;
+ (id)bridgeKeys;
+ (id)bridgeKeysForSemiAutonomousWindowBase:(unsigned char)a0;
+ (id)controllerForWindow:(id)a0;

- (void)dealloc;
- (void)invalidate;
- (id)initWithWindow:(id)a0;
- (id)accessibilityCancelButton;
- (id)accessibilityDefaultButton;
- (void)loadView;
- (BOOL)_isSecondary;
- (unsigned long long)awakeFromRemoteView;
- (void)windowWillOrder:(long long)a0 relativeTo:(long long)a1;
- (id)objectToObserveForKey:(id)a0 withWindow:(id)a1;
- (id)tokenForElement:(id)a0;

@end
