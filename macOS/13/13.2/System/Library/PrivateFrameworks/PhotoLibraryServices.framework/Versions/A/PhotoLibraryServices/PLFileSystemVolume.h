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

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)entityName;
+ (id)volumeForURL:(id)a0 context:(id)a1;
+ (id)volumeForVolumeUUID:(id)a0 context:(id)a1;
+ (id)volumeForObjectUUID:(id)a0 context:(id)a1;
+ (id)predictedURLForVolumeName:(id)a0;

- (void).cxx_destruct;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)willTurnIntoFault;
- (void)didTurnIntoFault;
- (void)unregisterWithVolumeManager;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;
- (id)payloadForChangedKeys:(id)a0;
- (BOOL)supportsCloudUpload;
- (void)_registerWithVolumeManager;
- (void)_unregisterWithVolumeManager;
- (id)predictedURL;

@end
