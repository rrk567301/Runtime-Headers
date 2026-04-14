@class MTRBaseDevice, MTRBaseClusterDoorLock, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface HMMTRDoorLockClusterAPIRouter : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) MTRBaseClusterDoorLock *baseDoorLock;
@property (readonly) MTRBaseDevice *baseDevice;
@property (retain) NSNumber *nsNumberIsCustomClusterAvailable;

+ (id)doorLockFeatureMapSupportsAppleCustomAliroBLEUWB:(id)a0;
+ (id)doorLockFeatureMapSupportsAppleCustomAliroProvisioning:(id)a0;
+ (id)aliroCredentialFromCredential:(id)a0 flow:(id)a1;
+ (id)aliroCredentialTypeForCredentialType:(id)a0 flow:(id)a1;
+ (id)aliroGetCredentialParamsFromParams:(id)a0 flow:(id)a1;
+ (id)aliroReaderConfigParamsFromParams:(id)a0;
+ (id)aliroSetCredentialParamsFromParams:(id)a0 flow:(id)a1;
+ (id)credentialTypeForAliroCredentialType:(unsigned char)a0 flow:(id)a1;
+ (BOOL)isCredentialTypeAliro:(id)a0;
+ (id)mergeAndRemoveDuplicatesFromArray:(id)a0 andArray:(id)a1;
+ (id)readerConfigParamsFromReaderConfig:(id)a0;

- (void).cxx_destruct;
- (void)fetchAppleClusterFeaturesWithFlow:(id)a0 completion:(id /* block */)a1;
- (id)getAliroCredentialAtIndex:(long long)a0 forCredentialType:(long long)a1 flow:(id)a2;
- (id)getAllAppleAliroCredentialsForUser:(id)a0 flow:(id)a1;
- (id)getAppleAliroCredentialsForUser:(id)a0 withCredentialType:(long long)a1 startingAtIndex:(long long)a2 credentials:(id)a3 flow:(id)a4;
- (void)getCredentialStatusWithParams:(id)a0 flow:(id)a1 completion:(id /* block */)a2;
- (void)getUserWithParams:(id)a0 includeAliroCredentials:(BOOL)a1 flow:(id)a2 completion:(id /* block */)a3;
- (id)initWithBaseDoorLock:(id)a0 baseDevice:(id)a1 queue:(id)a2;
- (void)isCustomClusterAvailableWithFlow:(id)a0 completion:(id /* block */)a1;
- (void)readAttributeAliroGroupResolvingKeyWithFlow:(id)a0 completion:(id /* block */)a1;
- (void)readAttributeAliroReaderGroupIdentifierWithFlow:(id)a0 completion:(id /* block */)a1;
- (void)readAttributeAliroReaderVerificationKeyWithFlow:(id)a0 completion:(id /* block */)a1;
- (void)setAliroReaderConfigWithConfig:(id)a0 flow:(id)a1 completion:(id /* block */)a2;
- (void)setCredentialWithParams:(id)a0 flow:(id)a1 completion:(id /* block */)a2;

@end
