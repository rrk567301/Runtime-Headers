@class NSMutableArray, NSMutableDictionary;

@interface _IDSRegistrationAccountManager : NSObject

@property (retain, nonatomic) NSMutableArray *knownDevices;
@property (retain, nonatomic) NSMutableArray *knownRegistrations;
@property (retain, nonatomic) NSMutableDictionary *accountIDToAccounts;

- (id)init;
- (void).cxx_destruct;
- (void)updateAccount:(id)a0 withRegistration:(id)a1;
- (void)_deleteUnusedRegistrationData;
- (id)_findOrCreateDeviceForDictionary:(id)a0;
- (id)_findOrCreateRegistrationInfoForDictionary:(id)a0;
- (id)accountIDToRegistrationMapping;
- (id)allAccountIDs;
- (id)registeredDeviceInfoForAccountID:(id)a0;
- (void)removeAllRecords;

@end
