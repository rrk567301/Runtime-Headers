@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDDeviceIDManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *deviceIDsByContainerIdentifierByContainerEnvironment;
@property (nonatomic) BOOL useLegacyKeychain;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)deviceIDsByContainerIdentifierInContainerEnvironment:(long long)a0;
- (id)_serviceForContainer:(id)a0;
- (id)_perServicelookupKeyForContainer:(id)a0;
- (id)_savedDeviceIdentifierForContainer:(id)a0;
- (void)_saveDeviceIdentifierToDefaults:(id)a0 forContainer:(id)a1;
- (struct __CFDictionary { } *)createQueryForDeviceIdentifierInContainer:(id)a0;
- (void)_saveDeviceIdentifier:(id)a0 forContainer:(id)a1;
- (void)_deleteDeviceIdentifierForContainer:(id)a0;
- (id)deviceIdentifierForContainer:(id)a0;
- (id)deviceIdentifierForContainer:(id)a0 skipInMemoryCache:(BOOL)a1 createIfNecessary:(BOOL)a2;

@end
