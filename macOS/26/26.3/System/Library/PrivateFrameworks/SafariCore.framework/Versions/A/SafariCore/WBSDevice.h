@class NSString;

@interface WBSDevice : NSObject {
    struct MGNotificationTokenStruct { } *_notificationToken;
    NSString *_deviceTypeIdentifier;
}

@property (class, readonly, nonatomic) WBSDevice *currentDevice;

@property (copy, nonatomic, setter=_setUserAssignedName:) NSString *userAssignedName;
@property (copy, nonatomic, setter=test_setUserAssignedName:) NSString *test_userAssignedName;
@property (readonly, nonatomic) int deviceClass;
@property (readonly, copy, nonatomic) NSString *deviceTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *userUniqueDeviceIdentifier;
@property (readonly, nonatomic) BOOL hasPasscode;
@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly, copy, nonatomic) NSString *modelName;
@property (readonly, copy, nonatomic) NSString *chipName;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)unregisterForNotifications;
- (id)objectForKey:(id)a0;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void)registerForNotifications;
- (void).cxx_destruct;
- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)_baseKeychainQueryWithKey:(id)a0;

@end
