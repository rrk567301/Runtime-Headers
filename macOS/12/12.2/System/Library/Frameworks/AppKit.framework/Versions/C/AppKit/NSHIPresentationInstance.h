@interface NSHIPresentationInstance : NSObject {
    unsigned long long _spaceID;
    struct OpaqueHIPresentationInstanceRef { } *_ref;
}

- (void)dealloc;
- (id)init;
- (struct OpaqueHIPresentationInstanceRef { } *)currentPresentationInstance;
- (void)setSpace:(unsigned long long)a0;
- (id)initWithPresentationOptions:(unsigned long long)a0 hasAlwaysVisibleMenuBar:(BOOL)a1;
- (void)discard;

@end
