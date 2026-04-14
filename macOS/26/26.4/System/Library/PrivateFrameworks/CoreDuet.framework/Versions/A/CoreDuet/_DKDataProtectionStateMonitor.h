@class _DKDataProtectionMonitor, NSUUID;

@interface _DKDataProtectionStateMonitor : NSObject {
    _DKDataProtectionMonitor *_main;
    NSUUID *_handlerUUID;
}

@property (copy) id /* block */ changeHandler;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isDataAvailableFor:(id)a0;
- (void)dealloc;

@end
