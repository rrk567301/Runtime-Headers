@class NSString, WBSDevice, NSUserDefaults;

@interface WBSDeviceIdentifierManager : NSObject {
    NSString *_deviceStoreKey;
    BOOL _listensToChangeDistributedNotifications;
}

@property (readonly, copy, nonatomic) NSString *deviceIdentifierKey;
@property (readonly, nonatomic) BOOL readOnly;
@property (readonly, nonatomic) WBSDevice *device;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) BOOL shouldMigrateDeviceIdentifier;
@property (readonly, nonatomic) BOOL didFailToMigratePlist;

- (void)startObservingChanges;
- (void).cxx_destruct;
- (void)stopObservingChanges;
- (void)_deviceIdentifierDidChangeRemotely;
- (id)_generateDeviceIdentifier;
- (void)_setDeviceIdentifier:(id)a0 andNotifyLocally:(BOOL)a1 notifyRemotely:(BOOL)a2;
- (void)_setListensToChangeDistributedNotifications:(BOOL)a0;
- (void)clearDeviceIdentifier;
- (void)didMigrateDeviceIdentifier;
- (id)initWithKey:(id)a0 readOnly:(BOOL)a1;
- (id)initWithKey:(id)a0 readOnly:(BOOL)a1 device:(id)a2 userDefaults:(id)a3;
- (void)migrateDeviceIdentifierIfNeeded:(id)a0;
- (void)migrateFromPlistAtURLIfNeeded:(id)a0;

@end
