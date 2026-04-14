@class NSSet;

@interface NSRendezvousWindowController : NSServiceViewController {
    NSSet *_bridgeKeysObserved;
}

+ (id)controllerForWindow:(id)a0;
+ (id)bridgeKeysForSemiAutonomousWindowBase:(unsigned char)a0;
+ (void)addBridgeKeys:(id)a0;
+ (id)bridgeKeys;

- (void)dealloc;
- (void)invalidate;
- (void)loadView;
- (id)accessibilityCancelButton;
- (id)accessibilityDefaultButton;
- (id)initWithWindow:(id)a0;
- (BOOL)_isSecondary;
- (unsigned long long)awakeFromRemoteView;
- (void)windowWillOrder:(long long)a0 relativeTo:(long long)a1;
- (id)objectToObserveForKey:(id)a0 withWindow:(id)a1;
- (id)tokenForElement:(id)a0;

@end
