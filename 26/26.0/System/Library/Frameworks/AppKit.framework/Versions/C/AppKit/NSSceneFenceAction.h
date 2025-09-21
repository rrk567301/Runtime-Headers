@class CAFenceHandle;

@interface NSSceneFenceAction : BSAction {
    CAFenceHandle *_fence;
    unsigned int _deferIPCPort;
}

+ (id)fenceActionForWindow:(id)a0;

- (id)initWithXPCDictionary:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (void)encodeWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (void)applyToWindow:(id)a0;

@end
