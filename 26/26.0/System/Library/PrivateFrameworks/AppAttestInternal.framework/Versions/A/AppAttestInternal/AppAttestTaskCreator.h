@interface AppAttestTaskCreator : NSObject

+ (id)create;
+ (id)createForDefaultAttest;
+ (id)createForDeviceAttestKeychain;
+ (id)createForWebAuthAttestKeychain;

@end
