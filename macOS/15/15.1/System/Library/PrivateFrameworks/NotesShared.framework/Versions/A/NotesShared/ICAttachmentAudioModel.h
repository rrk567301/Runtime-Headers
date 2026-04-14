@class NSString, NSArray, ICTTAudioDocument, NSDate;

@interface ICAttachmentAudioModel : ICAttachmentModel

@property (nonatomic, readonly) BOOL needsTranscription;
@property (nonatomic) BOOL recordedInNotes;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSArray *composedAudioAssetURLs;
@property (retain, nonatomic) ICTTAudioDocument *audioDocument;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)asset;
- (id)initWithAttachment:(id)a0;
- (void)assetWithCompletion:(id /* block */)a0;
- (void)attachmentDidRefresh:(BOOL)a0;
- (void)attachmentWillRefresh:(BOOL)a0;
- (void)attachmentWillTurnIntoFault;
- (id)bitFlippeddUUIDWithUuid:(id)a0;
- (id)createSubattachmentForRecordingAndReturnError:(id *)a0;
- (BOOL)deleteSummaryAndReturnError:(id *)a0;
- (BOOL)hidesSubAttachmentsInAttachmentBrowser;
- (BOOL)isReadyToPresent;
- (BOOL)mergeWithMergeableData:(id)a0 mergeableFieldState:(id)a1;
- (BOOL)saveAttachmentAndReturnError:(id *)a0;
- (id)searchableTextContent;
- (void)transformNewlyAddedMediaAttachment;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)a0;
- (void)updateFileBasedAttributes;
- (void)writeMergeableData;

@end
