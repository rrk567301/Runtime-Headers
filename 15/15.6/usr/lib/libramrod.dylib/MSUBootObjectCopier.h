@class NSString, NSDictionary, NSData;

@interface MSUBootObjectCopier : NSObject

@property (retain) NSString *systemVolumeMountPoint;
@property (readonly) char systemIsRecovery;
@property (retain) NSString *prebootVolumeMountPoint;
@property (retain) NSString *uuid;
@property (retain) NSString *preservedRestoreBundlePath;
@property (retain) NSString *stagedPreservedRestoreBundlePath;
@property (retain) NSDictionary *bootCachesBless2Info;
@property (retain) NSData *ticket;

+ (id)buildManifestFromBuildIdentity:(id)a0;
+ (id)payloadPathForTag:(id)a0 buildIdentity:(id)a1;

- (void)dealloc;
- (id)_hardwareModel;
- (id)_tagsToPreserve;
- (char)_ensureDirectoryExistsAtPath:(id)a0 error:(id *)a1;
- (id)_loadBootCachesBless2Info:(id)a0;
- (unsigned long long)_manifestRuleForTag:(id)a0;
- (id)_preservedTicketNameForRunningDeviceWithPersonalization:(char)a0;
- (id)_stitchedPathForTag:(id)a0;
- (id)_tagsInBuildIdentity:(id)a0;
- (char)_writeTicketToDirectory:(id)a0;
- (char)createNonAtomicPrebootPathsForBless;
- (id)initWithSystemVolume:(id)a0 prebootVolume:(id)a1 uuid:(id)a2;
- (id)initWithSystemVolume:(id)a0 systemIsRecovery:(char)a1 prebootVolume:(id)a2 uuid:(id)a3 bootCaches:(id)a4;
- (id)initWithSystemVolume:(id)a0 systemIsRecovery:(char)a1 prebootVolume:(id)a2 uuid:(id)a3 bootCaches:(id)a4 ticket:(id)a5;
- (char)populateSystemRecoveryVolume:(id)a0 buildIdentity:(id)a1 nsih:(id)a2 fetchBootObjectBlock:(id /* block */)a3;
- (char)preserveBootObjectsWithBuildIdentity:(id)a0 fetchBootObjectBlock:(id /* block */)a1;
- (char)stagePreservedBootObjectsWithUpdateBundlePath:(id)a0 variant:(id)a1 mediumSecurity:(char)a2;

@end
