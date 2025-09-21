@class _DKDataProtectionMonitor, NSUUID;

@interface _DKDataProtectionStateMonitor : NSObject {
    _DKDataProtectionMonitor *_main;
    NSUUID *_handlerUUID;
}

@property (copy) id /* block */ changeHandler;

- (void)dealloc;
- (BOOL)isDataAvailableFor:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
