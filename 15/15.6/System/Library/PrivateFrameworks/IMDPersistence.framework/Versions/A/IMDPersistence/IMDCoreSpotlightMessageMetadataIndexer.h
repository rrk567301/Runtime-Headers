@class NSString;

@interface IMDCoreSpotlightMessageMetadataIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (class, readonly, nonatomic) NSString *timingProfileKey;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)_spotlightEffectTypeForItemDictionary:(id)a0;
+ (char)cancelIndexingForItem:(id)a0;
+ (void)indexItem:(id)a0 withChat:(id)a1 isReindexing:(char)a2 metadataToUpdate:(id)a3 timingProfiler:(id)a4;
+ (char)isMutedChatForChatDictionary:(id)a0;


@end
