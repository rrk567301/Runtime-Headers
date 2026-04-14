@class ICDrawing, ICDrawingVersionedDocument;

@interface ICAttachmentDrawingModel : ICAttachmentModel {
    ICDrawingVersionedDocument *_drawingDocument;
}

@property (nonatomic) BOOL observingAttachment;
@property (readonly, nonatomic) ICDrawing *drawing;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)previewItemURL;
- (id)previewItemTitle;
- (id)saveURL;
- (id)initWithAttachment:(id)a0;
- (BOOL)mergeWithMergeableData:(id)a0;
- (id)previewImageURL;
- (BOOL)preferLocalPreviewImages;
- (BOOL)showThumbnailInNoteList;
- (BOOL)hasPreviews;
- (BOOL)previewsSupportMultipleAppearances;
- (BOOL)shouldSyncPreviewImageToCloud:(id)a0;
- (void)writeMergeableData;
- (BOOL)canSaveURL;
- (void)attachmentIsDeallocating:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })previewImageOrientationTransform;
- (BOOL)supportsQuickLook;
- (void)startObservingAttachment;
- (void)stopObservingAttachment:(id)a0;
- (id)drawingDocument;
- (void)drawingPreviewIsUpToDate;

@end
