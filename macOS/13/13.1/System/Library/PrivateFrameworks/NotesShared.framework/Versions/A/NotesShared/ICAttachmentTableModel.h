@class ICTableVersionedDocument, ICTable;

@interface ICAttachmentTableModel : ICAttachmentModel

@property (retain, nonatomic) ICTableVersionedDocument *tableDocument;
@property (readonly, nonatomic) ICTable *table;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;
+ (id)tableFromAttributedString:(id)a0 managedObjectContext:(id)a1 replicaID:(id)a2;

- (void).cxx_destruct;
- (id)localizedFallbackTitle;
- (id)searchableTextContentInNote;
- (BOOL)mergeWithMergeableData:(id)a0 mergeableFieldState:(id)a1;
- (void)writeMergeableData;
- (void)addMergeableDataToCloudKitRecord:(id)a0 approach:(long long)a1 mergeableFieldState:(id)a2;
- (BOOL)providesTextContentInNote;
- (void)regenerateTextContentInNote;
- (id)textContentInNote;
- (void)attachmentAwakeFromFetch;
- (void)attachmentWillTurnIntoFault;
- (void)attachmentWillRefresh:(BOOL)a0;
- (void)attachmentDidRefresh:(BOOL)a0;
- (void)updateAfterLoadWithInlineAttachmentIdentifierMap:(id)a0;
- (void)willMarkAttachmentForDeletion;
- (BOOL)isReadyToPresent;
- (id)localizedFallbackSubtitleIOS;
- (id)localizedFallbackSubtitleMac;
- (void)noteWillAddOrRemovePassword;
- (void)replaceChildInlineAttachment:(id)a0 withText:(id)a1;
- (id)mergeableDataForCopying:(id *)a0;
- (void)removeTimestampsForReplicaID:(id)a0;
- (id)stringsAtRow:(unsigned long long)a0;
- (void)writeCurrentTimestampToMergeableFieldStateIfNecessary:(id)a0;
- (void)updateAttachmentByMergingWithTableData:(id)a0;
- (void)mergeTablePrimitiveData;

@end
