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
+ (id)volumeForVolumeUUID:(id)a0 context:(id)a1;
+ (id)volumeForURL:(id)a0 context:(id)a1;
+ (id)volumeForObjectUUID:(id)a0 context:(id)a1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void)awakeFromInsert;
- (id)payloadID;
- (void)willTurnIntoFault;
- (id)payloadForChangedKeys:(id)a0;
- (void)awakeFromFetch;
- (void)unregisterWithVolumeManager;
- (void)_unregisterWithVolumeManager;
- (id)predictedURL;
- (void).cxx_destruct;
- (void)_registerWithVolumeManager;
- (void)didTurnIntoFault;
- (BOOL)supportsCloudUpload;
- (id)payloadIDForTombstone:(id)a0;

@end
