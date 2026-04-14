@class TTOrderedSetVersionedDocument, CROrderedSet;

@interface ICAttachmentGalleryModel : ICAttachmentModel

@property (retain, nonatomic) TTOrderedSetVersionedDocument *attachmentIdentifiersOrderedSetDocument;
@property (readonly, nonatomic) CROrderedSet *attachmentIdentifiersOrderedSet;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (void).cxx_destruct;
- (BOOL)hasThumbnailImage;
- (id)searchableTextContent;
- (BOOL)hasPreviews;
- (BOOL)showThumbnailInNoteList;
- (BOOL)providesStandaloneTitleForNote;
- (id)standaloneTitleForNote;
- (BOOL)mergeWithMergeableData:(id)a0 mergeableFieldState:(id)a1;
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
- (id)firstSubAttachment;
- (BOOL)attachmentHasMergeableData;
- (void)addSubAttachment:(id)a0;
- (void)insertSubAttachment:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeSubAttachment:(id)a0;
- (void)enumerateSubAttachmentsWithBlock:(id /* block */)a0;
- (unsigned long long)indexOfSubAttachmentWithIdentifier:(id)a0;
- (unsigned long long)subAttachmentsCount;
- (id)subAttachmentIdentifiers;
- (id)subAttachmentIdentifierAtIndex:(unsigned long long)a0;
- (id)singleSubAttachmentAtIndex:(unsigned long long)a0;
- (id)attachmentIdentifiersOrderedSet;
- (void)undeleteSubAttachments;
- (id)searchableStringArray;

@end
