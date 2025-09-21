@class IMKServerPrivate;

@interface IMKServer : NSObject <IMKServerProxy> {
    IMKServerPrivate *_private;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (struct __CFString { } *)privateRunLoopMode;
+ (Class)subclass;
+ (id)_allowedInputMethodConnectionNames;
+ (id)_clientWrapperForDOProxy:(id)a0;
+ (id)_clientWrapperForXPCConn:(id)a0;
+ (id)connectionNameFor:(id)a0;
+ (id)imkServerSingleton;
+ (id)inputControllerClassNameFor:(id)a0;
+ (id)inputDelegateClassNameFor:(id)a0;
+ (char)isValidBundleIdentifier:(id)a0;
+ (char)sendsTouchBarCandidatesToApp;

@end
