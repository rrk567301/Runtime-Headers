@class NSUUID, _OSDataProtectionManager;

@interface _OSDataProtectionStateMonitor : NSObject

@property (readonly, nonatomic) _OSDataProtectionManager *manager;
@property (readonly, nonatomic) NSUUID *handlerUUID;
@property (copy, nonatomic) id /* block */ changeHandler;

+ (id)dataProtectionClassD;
+ (id)dataProtectionClassA;
+ (id)dataProtectionClassC;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isDataAvailableFor:(id)a0;
- (void)dealloc;
- (BOOL)unnotifiedIsDataAvailableForClassC;

@end
