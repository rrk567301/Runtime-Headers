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
+ (id)predictedURLForVolumeName:(id)a0;
+ (id)volumeForObjectUUID:(id)a0 context:(id)a1;
+ (id)volumeForURL:(id)a0 context:(id)a1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)volumeForVolumeUUID:(id)a0 context:(id)a1;

- (void)didTurnIntoFault;
- (void)willTurnIntoFault;
- (id)payloadID;
- (void)unregisterWithVolumeManager;
- (id)payloadForChangedKeys:(id)a0;
- (void)awakeFromFetch;
- (id)predictedURL;
- (void)_registerWithVolumeManager;
- (void).cxx_destruct;
- (void)awakeFromInsert;
- (void)_unregisterWithVolumeManager;
- (BOOL)supportsCloudUpload;
- (id)payloadIDForTombstone:(id)a0;

@end
