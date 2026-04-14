@class TTOrderedSetVersionedDocument, CROrderedSet;

@interface ICAttachmentGalleryModel : ICAttachmentModel

@property (retain, nonatomic) TTOrderedSetVersionedDocument *attachmentIdentifiersOrderedSetDocument;
@property (readonly, nonatomic) CROrderedSet *attachmentIdentifiersOrderedSet;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (void).cxx_destruct;
- (BOOL)hasThumbnailImage;
- (BOOL)mergeWithMergeableData:(id)a0;
- (id)searchableTextContent;
- (BOOL)showThumbnailInNoteList;
- (BOOL)providesStandaloneTitleForNote;
- (id)standaloneTitleForNote;
- (BOOL)hasPreviews;
- (void)writeMergeableData;
- (id)previewImageTypeUTI;
- (BOOL)canSaveURL;
- (BOOL)canSaveURLWithOtherAttachments;
- (void)attachmentWillTurnIntoFault;
- (void)attachmentWillRefresh:(BOOL)a0;
- (void)attachmentDidRefresh:(BOOL)a0;
- (short)sectionForSubAttachments;
- (BOOL)shouldGeneratePreviewAfterChangeInSubAttachmentWithIdentifier:(id)a0;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)a0;
- (void)updateAttachmentMarkedForDeletionStateAttachmentIsInUse:(BOOL)a0;
- (id)titleForSubAttachment:(id)a0;
- (void)enumerateSubAttachmentsWithBlock:(id /* block */)a0;
- (id)firstSubAttachment;
- (unsigned long long)subAttachmentsCount;
- (id)singleSubAttachmentAtIndex:(unsigned long long)a0;
- (id)attachmentIdentifiersOrderedSet;
- (void)insertSubAttachment:(id)a0 atIndex:(unsigned long long)a1;
- (id)subAttachmentIdentifiers;
- (BOOL)attachmentHasMergeableData;
- (id)subAttachmentIdentifierAtIndex:(unsigned long long)a0;
- (id)searchableStringArray;
- (void)addSubAttachment:(id)a0;
- (void)removeSubAttachment:(id)a0;
- (unsigned long long)indexOfSubAttachmentWithIdentifier:(id)a0;
- (void)undeleteSubAttachments;

@end
