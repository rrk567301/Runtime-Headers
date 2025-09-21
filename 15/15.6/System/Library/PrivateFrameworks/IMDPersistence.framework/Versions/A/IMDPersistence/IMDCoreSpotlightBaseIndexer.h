@class NSString;

@interface IMDCoreSpotlightBaseIndexer : NSObject <IMDCoreSpotlightIndexer>

@property (class, readonly, nonatomic) NSString *timingProfileKey;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)auxiliaryItemsForPrimaryAttributes:(id)a0 withItem:(id)a1 chat:(id)a2 isReindexing:(char)a3 timingProfiler:(id)a4 rejectedItems:(id)a5;
+ (char)cancelIndexingForItem:(id)a0;
+ (id)chatUniqueIdentifierKey;
+ (void)indexItem:(id)a0 withChat:(id)a1 isReindexing:(char)a2 metadataToUpdate:(id)a3 timingProfiler:(id)a4;
+ (id)isBusinessChatCustomKey;
+ (id)isChatMutedCustomKey;
+ (id)isFromMeCustomKey;
+ (id)mentionedAddressesCustomKey;
+ (void)startTimingWithProfiler:(id)a0;
+ (void)stopTimingWithProfiler:(id)a0;


@end
