@class NSString, NSURL, NSSet;

@interface PLFileSystemVolume : PLManagedObject {
    NSURL *_url;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *volumeUuidString;
@property (copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL isOffline;
@property (retain, nonatomic) NSSet *resources;

+ (id)entityName;
+ (id)volumeForURL:(id)a0 context:(id)a1;
+ (id)volumeForVolumeUUID:(id)a0 context:(id)a1;
+ (id)predictedURLForVolumeName:(id)a0;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)volumeForObjectUUID:(id)a0 context:(id)a1;

- (void)awakeFromInsert;
- (id)payloadID;
- (void)awakeFromFetch;
- (void)willTurnIntoFault;
- (id)payloadForChangedKeys:(id)a0;
- (void)_unregisterWithVolumeManager;
- (void)_registerWithVolumeManager;
- (BOOL)supportsCloudUpload;
- (id)payloadIDForTombstone:(id)a0;
- (void).cxx_destruct;
- (void)unregisterWithVolumeManager;
- (void)didTurnIntoFault;
- (id)predictedURL;

@end
