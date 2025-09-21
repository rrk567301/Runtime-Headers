@class EKAttachment;
@protocol CUIKAttachmentDownloadControllerDelegate;

@interface CUIKAttachmentDownloadController : NSObject {
    id _downloadID;
}

@property (retain, nonatomic) EKAttachment *attachment;
@property (weak, nonatomic) id<CUIKAttachmentDownloadControllerDelegate> delegate;

+ (BOOL)_attachmentIsViewable:(id)a0;
+ (id)_keyForAttachment:(id)a0;

- (void)tearDown;
- (id)event;
- (void).cxx_destruct;
- (id)initWithAttachment:(id)a0;
- (id)attachmentFilename;
- (id)attachmentIdentifier;
- (void)_clearDownloadID;
- (void)cellSelected;
- (void)startAttachmentDownload;

@end
