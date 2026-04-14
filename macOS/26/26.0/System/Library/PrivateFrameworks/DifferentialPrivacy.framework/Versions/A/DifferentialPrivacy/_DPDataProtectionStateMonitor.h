@class NSUUID, _DPDataProtectionMaster;

@interface _DPDataProtectionStateMonitor : NSObject

@property (readonly, nonatomic) _DPDataProtectionMaster *master;
@property (readonly) NSUUID *handlerUUID;
@property (copy) id /* block */ changeHandler;

+ (id)dataProtectionClassC;
+ (id)dataProtectionClassD;
+ (id)dataProtectionClassA;

- (void)dealloc;
- (BOOL)isDataAvailableFor:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
