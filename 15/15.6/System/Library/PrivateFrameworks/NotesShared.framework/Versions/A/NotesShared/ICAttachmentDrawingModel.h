@class ICDrawing, ICDrawingVersionedDocument;

@interface ICAttachmentDrawingModel : ICAttachmentModel {
    ICDrawingVersionedDocument *_drawingDocument;
}

@property (nonatomic) char observingAttachment;
@property (readonly, nonatomic) ICDrawing *drawing;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)saveURL;
- (id)initWithAttachment:(id)a0;
- (id)drawingDocument;
- (id)previewImageURL;
- (void)attachmentIsDeallocating:(id)a0;
- (char)canSaveURL;
- (void)drawingPreviewIsUpToDate;
- (char)hasPreviews;
- (char)mergeWithMergeableData:(id)a0 mergeableFieldState:(id)a1;
- (char)preferLocalPreviewImages;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })previewImageOrientationTransform;
- (char)previewsSupportMultipleAppearances;
- (char)shouldSyncPreviewImageToCloud:(id)a0;
- (char)showThumbnailInNoteList;
- (void)startObservingAttachment;
- (void)stopObservingAttachment:(id)a0;
- (char)supportsQuickLook;
- (void)writeMergeableData;

@end
