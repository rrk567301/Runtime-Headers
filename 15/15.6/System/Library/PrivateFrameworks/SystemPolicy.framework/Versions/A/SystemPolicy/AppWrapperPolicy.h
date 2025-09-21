@interface AppWrapperPolicy : NSObject

+ (id)appWrapperPolicyResult:(id)a0 forDeviceID:(id)a1 installProfile:(char)a2 checkResources:(char)a3 withProgressCallback:(id /* block */)a4;
+ (char)appWrapperProfileIsTrusted:(id)a0;

@end
