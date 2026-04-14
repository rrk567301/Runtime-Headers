@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDDeviceIDManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *deviceIDsByContainerIdentifierByContainerEnvironment;
@property (retain, nonatomic) NSString *globalDeviceID;
@property (nonatomic) BOOL useLegacyKeychain;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)globalDeviceIdentifier;
- (id)initInternal;
- (void)_deleteDeviceIdentifierForContainer:(id)a0;
- (id)_globalService;
- (id)_perServicelookupKeyForContainer:(id)a0;
- (void)_saveDeviceIdentifier:(id)a0 forContainer:(id)a1;
- (void)_saveDeviceIdentifier:(id)a0 forService:(id)a1 lookupKey:(id)a2 sysBound:(BOOL)a3 success:(BOOL *)a4;
- (void)_saveDeviceIdentifierToDefaults:(id)a0 forService:(id)a1 lookupKey:(id)a2;
- (id)_savedDeviceIdentifierForService:(id)a0 lookupKey:(id)a1 success:(BOOL *)a2;
- (id)_serviceForContainer:(id)a0;
- (struct __CFDictionary { } *)createQueryForService:(id)a0 lookupKey:(id)a1 sysBound:(BOOL)a2;
- (id)deviceIDsByContainerIdentifierInContainerEnvironment:(long long)a0;
- (id)deviceIdentifierForContainer:(id)a0;
- (id)deviceIdentifierForContainer:(id)a0 skipInMemoryCache:(BOOL)a1 createIfNecessary:(BOOL)a2;
- (id)globalDeviceIdentifierSkipInMemoryCache:(BOOL)a0 createIfNecessary:(BOOL)a1;

@end
