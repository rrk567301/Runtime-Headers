@class NSMenuBarPresentationInstance;

@interface NSHIPresentationInstance : NSObject {
    unsigned long long _spaceID;
    struct OpaqueHIPresentationInstanceRef { } *_ref;
    NSMenuBarPresentationInstance *_presentationInstance;
}

- (void)dealloc;
- (id)init;
- (void)discard;
- (id)currentNSPresentationInstance;
- (struct OpaqueHIPresentationInstanceRef { } *)currentPresentationInstance;
- (id)initWithPresentationOptions:(unsigned long long)a0 hasAlwaysVisibleMenuBar:(char)a1;
- (void)setHasAlwaysVisibleMenuBar:(char)a0;
- (void)setSpace:(unsigned long long)a0;

@end
