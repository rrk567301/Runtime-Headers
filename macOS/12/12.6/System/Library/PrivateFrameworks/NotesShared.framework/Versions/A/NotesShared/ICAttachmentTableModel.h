@class ICTableVersionedDocument, ICTable;

@interface ICAttachmentTableModel : ICAttachmentModel

@property (retain, nonatomic) ICTableVersionedDocument *tableDocument;
@property (readonly, nonatomic) ICTable *table;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;
+ (id)tableFromAttributedString:(id)a0 managedObjectContext:(id)a1 replicaID:(id)a2;

- (void).cxx_destruct;
- (id)localizedFallbackTitle;
- (BOOL)mergeWithMergeableData:(id)a0;
- (BOOL)providesTextContentInNote;
- (void)regenerateTextContentInNote;
- (id)localizedFallbackSubtitleIOS;
- (id)localizedFallbackSubtitleMac;
- (id)textContentInNote;
- (void)removeTimestampsForReplicaID:(id)a0;
- (void)noteWillAddOrRemovePassword;
- (id)searchableTextContentInNote;
- (id)mergeableDataForCopying:(id *)a0;
- (void)writeMergeableData;
- (void)attachmentAwakeFromFetch;
- (void)attachmentWillTurnIntoFault;
- (void)attachmentWillRefresh:(BOOL)a0;
- (void)attachmentDidRefresh:(BOOL)a0;
- (void)updateAfterLoadWithInlineAttachmentIdentifierMap:(id)a0;
- (void)willMarkAttachmentForDeletion;
- (BOOL)isReadyToPresent;
- (void)replaceChildInlineAttachment:(id)a0 withText:(id)a1;
- (void)mergeTablePrimitiveData;
- (id)stringsAtRow:(unsigned long long)a0;
- (void)updateAttachmentByMergingWithTableData:(id)a0;

@end
