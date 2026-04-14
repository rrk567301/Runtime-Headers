@class NSUUID, _DPDataProtectionMaster;

@interface _DPDataProtectionStateMonitor : NSObject

@property (readonly, nonatomic) _DPDataProtectionMaster *master;
@property (readonly) NSUUID *handlerUUID;
@property (copy) id /* block */ changeHandler;

+ (id)dataProtectionClassD;
+ (id)dataProtectionClassA;
+ (id)dataProtectionClassC;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isDataAvailableFor:(id)a0;
- (void)dealloc;

@end
