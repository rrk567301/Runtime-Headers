@interface CalendarUIKit.AttachmentsViewModel : NSObject <CUIKAttachmentDownloadControllerDelegate> {
    void /* unknown type, empty encoding */ owningEvent;
    void /* unknown type, empty encoding */ _attachmentControllers;
    void /* unknown type, empty encoding */ _showPreviewController;
    void /* unknown type, empty encoding */ _attachmentAlert;
    void /* unknown type, empty encoding */ _attachmentItem;
    void /* unknown type, empty encoding */ updateAttachmentStatus;
    void /* unknown type, empty encoding */ updateDownloadProgress;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (id)init;
- (void).cxx_destruct;
- (void)attachmentDownloadErrorWithIsSubscribedCalendar:(BOOL)a0;
- (void)openExternalAttachmentURLInBrowser:(id)a0;
- (id)owningEventForAttachmentDownloadController:(id)a0;
- (void)presentPreviewWithURL:(id)a0 fileName:(id)a1 ekAttachment:(id)a2;
- (void)promptToDownloadAttachmentFromHost:(id)a0 promptToDownloadCallBack:(id /* block */)a1;
- (void)updateAttachmentDownloadProgressWithIdentifier:(id)a0 downloadedBytes:(id)a1 outOfTotalBytes:(id)a2;
- (void)updateAttachmentStatusWithIdentifier:(id)a0 isLoading:(BOOL)a1;

@end
