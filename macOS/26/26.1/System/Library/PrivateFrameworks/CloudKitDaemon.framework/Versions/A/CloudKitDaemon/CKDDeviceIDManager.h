@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDDeviceIDManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *deviceIDsByContainerIdentifierByContainerEnvironmentByPersona;
@property (retain, nonatomic) NSMutableDictionary *globalDeviceIDsPerPersona;
@property (nonatomic) BOOL useLegacyKeychain;

+ (id)currentPersonaID;
+ (id)sharedManager;

- (id)globalDeviceID;
- (id)deviceIdentifierForContainer:(id)a0 skipInMemoryCache:(BOOL)a1 createIfNecessary:(BOOL)a2;
- (void)setGlobalDeviceID:(id)a0;
- (void)_saveDeviceIdentifierToDefaults:(id)a0 forService:(id)a1 lookupKey:(id)a2;
- (id)deviceIDsByContainerIdentifierInContainerEnvironment:(long long)a0;
- (id)globalDeviceIdentifierSkipInMemoryCache:(BOOL)a0 createIfNecessary:(BOOL)a1;
- (void)_deleteDeviceIdentifierForContainer:(id)a0;
- (id)initInternal;
- (id)_serviceForContainer:(id)a0;
- (struct __CFDictionary { } *)createQueryForService:(id)a0 lookupKey:(id)a1 sysBound:(BOOL)a2;
- (id)_fetchDeviceIdentifierFromDefaultsForService:(id)a0 lookupKey:(id)a1;
- (id)_globalService;
- (void)_saveDeviceIdentifier:(id)a0 forService:(id)a1 lookupKey:(id)a2 sysBound:(BOOL)a3 success:(BOOL *)a4;
- (id)_perServiceLookupKeyForContainer:(id)a0;
- (void).cxx_destruct;
- (id)_fetchDeviceIDForService:(id)a0 lookupKey:(id)a1 keychainSuccess:(BOOL *)a2;
- (id)deviceIdentifierForContainer:(id)a0;
- (id)globalDeviceIdentifier;
- (void)_saveDeviceIdentifier:(id)a0 forContainer:(id)a1;

@end
