@class NSUUID, _DPDataProtectionMaster;

@interface _DPDataProtectionStateMonitor : NSObject

@property (readonly, nonatomic) _DPDataProtectionMaster *master;
@property (readonly) NSUUID *handlerUUID;
@property (copy) id /* block */ changeHandler;

+ (id)dataProtectionClassD;
+ (id)dataProtectionClassA;
+ (id)dataProtectionClassC;

- (BOOL)isDataAvailableFor:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
