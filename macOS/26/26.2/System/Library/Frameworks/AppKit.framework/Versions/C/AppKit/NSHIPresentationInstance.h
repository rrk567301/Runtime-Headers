@class NSMenuBarPresentationInstance;

@interface NSHIPresentationInstance : NSObject {
    unsigned long long _spaceID;
    struct OpaqueHIPresentationInstanceRef { } *_ref;
    NSMenuBarPresentationInstance *_presentationInstance;
}

- (void)discard;
- (id)init;
- (void)dealloc;
- (id)currentNSPresentationInstance;
- (struct OpaqueHIPresentationInstanceRef { } *)currentPresentationInstance;
- (id)initWithPresentationOptions:(unsigned long long)a0 hasAlwaysVisibleMenuBar:(BOOL)a1;
- (void)setHasAlwaysVisibleMenuBar:(BOOL)a0;
- (void)setSpace:(unsigned long long)a0;

@end
