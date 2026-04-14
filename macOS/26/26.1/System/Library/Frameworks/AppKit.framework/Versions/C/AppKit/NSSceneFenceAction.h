@class CAFenceHandle;

@interface NSSceneFenceAction : BSAction {
    CAFenceHandle *_fence;
    unsigned int _deferIPCPort;
}

+ (id)fenceActionForWindow:(id)a0;

- (void)invalidate;
- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)applyToWindow:(id)a0;

@end
