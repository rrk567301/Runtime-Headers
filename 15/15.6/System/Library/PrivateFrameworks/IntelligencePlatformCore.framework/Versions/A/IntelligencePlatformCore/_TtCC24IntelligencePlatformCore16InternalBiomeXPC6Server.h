@class NSArray, NSString, NSError, GDViewQuery, NSNumber;

@interface _TtCC24IntelligencePlatformCore16InternalBiomeXPC6Server : NSObject <GDInternalBiomeXPCProtocol>

- (id)init;
- (void)viewClearAllDataWithViewQuery:(GDViewQuery *)a0 completion:(void (^)(NSArray *, NSError *))a1;
- (void)viewDumpStateWithCompletion:(id /* block */)a0;
- (void)viewRunUpdateWithViewQuery:(GDViewQuery *)a0 forceRebuild:(char)a1 priorityOverride:(NSNumber *)a2 completion:(void (^)(NSArray *, NSError *))a3;
- (void)viewSetEnabledWithName:(NSString *)a0 enabled:(char)a1 completion:(void (^)(char, NSError *))a2;
- (void)viewStopWithCompletion:(void (^)(char, NSError *))a0;
- (void)viewValidateWithCompletion:(void (^)(char, NSError *))a0;
- (void)viewValidateWithViewQuery:(GDViewQuery *)a0 applyFixes:(char)a1 verbose:(long long)a2 completion:(void (^)(NSString *, NSError *))a3;

@end
