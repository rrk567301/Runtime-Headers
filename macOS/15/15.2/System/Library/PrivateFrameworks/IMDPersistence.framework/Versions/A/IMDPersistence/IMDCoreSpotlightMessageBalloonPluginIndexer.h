@class NSString;

@interface IMDCoreSpotlightMessageBalloonPluginIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (class, readonly, nonatomic) NSString *timingProfileKey;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_insertLPType:(id)a0 subType:(id)a1 metadata:(id)a2;
+ (id)_addressComponentStringsFromMapMetadata:(id)a0;
+ (void)_indexLinkMetadata:(id)a0 metadataToUpdate:(id)a1;
+ (void)_insertURLDescription:(id)a0 metadataToUpdate:(id)a1;
+ (BOOL)_isMediaSpecialization:(id)a0;
+ (id)_linkSubTypeForMediaSpecialization:(id)a0;
+ (id)_linkTypeForMediaSpecialization:(id)a0;
+ (id)_newSummaryTextForPayloadData:(id)a0 item:(id)a1;
+ (id)_pluginPayloadAttachmentPathsForItem:(id)a0;
+ (BOOL)_richLinkPluginHasRichContentForItem:(id)a0 attachmentPaths:(id)a1 originalURL:(id)a2 outURL:(id *)a3 outTitle:(id *)a4 outLPMetadata:(id *)a5;
+ (void)indexItem:(id)a0 withChat:(id)a1 isReindexing:(BOOL)a2 metadataToUpdate:(id)a3 timingProfiler:(id)a4;
+ (id)lpDescriptionCustomKey;
+ (id)lpHasRichMediaCustomKey;
+ (id)lpPluginPathsCustomKey;


@end
