@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDDeviceIDManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *deviceIDsByContainerIdentifierByContainerEnvironmentByPersona;
@property (retain, nonatomic) NSMutableDictionary *globalDeviceIDsPerPersona;
@property (nonatomic) char useLegacyKeychain;

+ (id)sharedManager;
+ (id)currentPersonaID;

- (void).cxx_destruct;
- (id)initInternal;
- (void)_deleteDeviceIdentifierForContainer:(id)a0;
- (id)_fetchDeviceIDForService:(id)a0 lookupKey:(id)a1 keychainSuccess:(char *)a2;
- (id)_fetchDeviceIdentifierFromDefaultsForService:(id)a0 lookupKey:(id)a1;
- (id)_globalService;
- (id)_perServiceLookupKeyForContainer:(id)a0;
- (void)_saveDeviceIdentifier:(id)a0 forContainer:(id)a1;
- (void)_saveDeviceIdentifier:(id)a0 forService:(id)a1 lookupKey:(id)a2 sysBound:(char)a3 success:(char *)a4;
- (void)_saveDeviceIdentifierToDefaults:(id)a0 forService:(id)a1 lookupKey:(id)a2;
- (id)_serviceForContainer:(id)a0;
- (struct __CFDictionary { } *)createQueryForService:(id)a0 lookupKey:(id)a1 sysBound:(char)a2;
- (id)deviceIDsByContainerIdentifierInContainerEnvironment:(long long)a0;
- (id)deviceIdentifierForContainer:(id)a0;
- (id)deviceIdentifierForContainer:(id)a0 skipInMemoryCache:(char)a1 createIfNecessary:(char)a2;
- (id)globalDeviceID;
- (id)globalDeviceIdentifier;
- (id)globalDeviceIdentifierSkipInMemoryCache:(char)a0 createIfNecessary:(char)a1;
- (void)setGlobalDeviceID:(id)a0;

@end
