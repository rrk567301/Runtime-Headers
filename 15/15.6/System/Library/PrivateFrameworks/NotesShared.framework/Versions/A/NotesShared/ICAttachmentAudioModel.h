@class NSArray, ICTTAudioDocument;

@interface ICAttachmentAudioModel : ICAttachmentModel

@property (nonatomic, readonly) char needsTranscription;
@property (nonatomic) char recordedInNotes;
@property (readonly, copy, nonatomic) NSArray *composedAudioAssetURLs;
@property (retain, nonatomic) ICTTAudioDocument *audioDocument;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)asset;
- (id)initWithAttachment:(id)a0;
- (void)assetWithCompletion:(id /* block */)a0;
- (void)attachmentDidRefresh:(char)a0;
- (void)attachmentWillRefresh:(char)a0;
- (void)attachmentWillTurnIntoFault;
- (id)bitFlippeddUUIDWithUuid:(id)a0;
- (id)createSubattachmentForRecordingAndReturnError:(id *)a0;
- (char)deleteSummaryAndReturnError:(id *)a0;
- (char)hidesSubAttachmentsInAttachmentBrowser;
- (char)isReadyToPresent;
- (char)mergeWithMergeableData:(id)a0 mergeableFieldState:(id)a1;
- (char)providesStandaloneTitleForNote;
- (char)saveAttachmentAndReturnError:(id *)a0;
- (id)searchableTextContent;
- (id)standaloneTitleForNote;
- (void)transformNewlyAddedMediaAttachment;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)a0;
- (void)updateFileBasedAttributes;
- (void)writeMergeableData;

@end
