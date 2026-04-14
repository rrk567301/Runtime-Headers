@class NSString;

@interface DEDAEAEncryptor : NSObject <DEDEncryptor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)encryptLogsAtPath:(id)a0 toDirectory:(id)a1 withMetadata:(id)a2 anonymousDeviceUUID:(id)a3;

@end
