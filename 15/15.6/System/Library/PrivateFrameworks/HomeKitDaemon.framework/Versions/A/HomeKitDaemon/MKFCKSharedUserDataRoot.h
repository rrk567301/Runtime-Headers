@class NSString, NSUUID, NSData, NSSet, MKFCKSharedUserPhoto;

@interface MKFCKSharedUserDataRoot : MKFCKSharedUserData <HMDCoreDataCloudTransformable>

@property (nonatomic, copy) NSData *matCredIPKExternalRepresentation;
@property (nonatomic) char activityNotificationsEnabledForPersonalRequests;
@property (nonatomic) char allowExplicitContent;
@property (nonatomic) char allowiTunesAccount;
@property (nonatomic) char dolbyAtmosEnabled;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *iCloudAltDSID;
@property (copy, nonatomic) NSString *lastName;
@property (nonatomic) char losslessMusicEnabled;
@property (retain, nonatomic) NSData *matCredIPKExternalRepresentation;
@property (copy, nonatomic) NSUUID *photosPersonDataZoneUUID;
@property (nonatomic) char playbackInfluencesEnabled;
@property (nonatomic) char sharePhotosFaceClassifications;
@property (nonatomic) char siriIdentifyVoiceEnabled;
@property (retain, nonatomic) MKFCKSharedUserPhoto *aaProfilePhoto;
@property (retain, nonatomic) NSSet *accessorySettings;
@property (retain, nonatomic) NSSet *personsFromPhotos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (char)_importInsertOrUpdateWithObjectID:(id)a0 context:(id)a1;
+ (id)createWithHomeModelID:(id)a0 persistentStore:(id)a1 context:(id)a2;
+ (id)entityDescriptionFromContext:(id)a0;
+ (char)exportDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (char)exportInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (char)exportUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (char)importDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (char)importInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (char)importUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (id)rootKeyPath;

- (char)_importSharedUserProfileMetadataIntoLocalModel:(id)a0 context:(id)a1;
- (char)_importSharedUserSettingsIntoLocalModel:(id)a0 context:(id)a1;
- (id)fetchEquivalentModels:(id *)a0;
- (char)importAccessorySettingsIntoLocalModel:(id)a0 context:(id)a1;
- (char)importIntoLocalModel:(id)a0 context:(id)a1;
- (char)importIntoLocalModelWithContext:(id)a0;
- (char)importPersonsIntoLocalModel:(id)a0 context:(id)a1;

@end
