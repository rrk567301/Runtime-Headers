@class NSString;

@interface IMDCoreSpotlightMessageAttachmentIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (class, readonly, nonatomic) NSString *timingProfileKey;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)messageSupportsIndexingForItem:(id)a0;
+ (char)_attachmentIsSticker:(id)a0;
+ (id)_possibleVideoComplementExtensions;
+ (id)assetUUIDKey;
+ (id)attachmentIndexTypeForPath:(id)a0 filename:(id)a1 isSticker:(char)a2 isCommSafetySensitive:(char)a3 knownSender:(char)a4;
+ (id)attachmentIsSyndicatableMediaKey;
+ (id)attachmentRecordsFromAttachments:(id)a0;
+ (id)auxiliaryItemsForPrimaryAttributes:(id)a0 withItem:(id)a1 chat:(id)a2 isReindexing:(char)a3 timingProfiler:(id)a4 rejectedItems:(id)a5;
+ (void)indexItem:(id)a0 withChat:(id)a1 isReindexing:(char)a2 metadataToUpdate:(id)a3 timingProfiler:(id)a4;
+ (id)livePhotoComplementKey;
+ (id)momentShareURLKey;
+ (id)videoComplementPathForResourceURL:(id)a0;


@end
