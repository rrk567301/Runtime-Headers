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

+ (id)volumeForObjectUUID:(id)a0 context:(id)a1;
+ (id)predictedURLForVolumeName:(id)a0;
+ (id)volumeForURL:(id)a0 context:(id)a1;
+ (id)entityName;
+ (id)volumeForVolumeUUID:(id)a0 context:(id)a1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (void)awakeFromInsert;
- (id)predictedURL;
- (id)payloadIDForTombstone:(id)a0;
- (void)didTurnIntoFault;
- (void)_registerWithVolumeManager;
- (void)awakeFromFetch;
- (BOOL)supportsCloudUpload;
- (void)_unregisterWithVolumeManager;
- (void)willTurnIntoFault;
- (void)unregisterWithVolumeManager;
- (void).cxx_destruct;

@end
