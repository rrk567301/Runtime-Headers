@interface _EXExtensionProcessMannger : NSObject <_EXExtensionProcessObserver> {
    void /* unknown type, empty encoding */ processExtensionMap;
    void /* unknown type, empty encoding */ processExtensionMapLock;
}

- (void).cxx_destruct;
- (void)processDidInvalidate:(id)a0;
- (id)init;

@end
