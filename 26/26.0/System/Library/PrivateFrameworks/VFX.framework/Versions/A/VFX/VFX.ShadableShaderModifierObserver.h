@interface VFX.ShadableShaderModifierObserver : NSObject {
    void /* unknown type, empty encoding */ shadable;
    void /* unknown type, empty encoding */ propertyCache;
}

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
