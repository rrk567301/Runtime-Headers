@class NSString;

@interface IMDCoreSpotlightRecipientIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (class, readonly, nonatomic) unsigned long long migrationRequirement;
@property (class, readonly, nonatomic) NSString *timingProfileKey;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_contactsForURIs:(id)a0;
+ (id)_createCSPeopleForParticipantIDs:(id)a0 sender:(id)a1 lastAddressedLocalHandle:(id)a2 messageService:(id)a3 timingProfiler:(id)a4;
+ (id)_handleIDForHandleID:(id)a0;
+ (id)groupPhotoPathCustomKey;
+ (void)indexItem:(id)a0 withChat:(id)a1 context:(id)a2 metadataToUpdate:(id)a3 timingProfiler:(id)a4;
+ (id)suggestedContactNameCustomKey;
+ (id)suggestedContactPhotoCustomKey;


@end
