@class _DKDataProtectionMonitor, NSUUID;

@interface _DKDataProtectionStateMonitor : NSObject {
    _DKDataProtectionMonitor *_main;
    NSUUID *_handlerUUID;
}

@property (copy) id /* block */ changeHandler;

- (id)init;
- (BOOL)isDataAvailableFor:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
