@class NSMenuBarPresentationInstance;

@interface NSHIPresentationInstance : NSObject {
    unsigned long long _spaceID;
    struct OpaqueHIPresentationInstanceRef { } *_ref;
    NSMenuBarPresentationInstance *_presentationInstance;
}

- (void)dealloc;
- (id)init;
- (void)setSpace:(unsigned long long)a0;
- (id)initWithPresentationOptions:(unsigned long long)a0 hasAlwaysVisibleMenuBar:(BOOL)a1;
- (void)discard;
- (struct OpaqueHIPresentationInstanceRef { } *)currentPresentationInstance;
- (id)currentNSPresentationInstance;

@end
