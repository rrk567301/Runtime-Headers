@class NSString, NSURL;

@interface RemindersUICore.TTRMReminderCellAttachmentCollectionQLPreviewItem : NSObject <QLPreviewItem> {
    void /* unknown type, empty encoding */ attachmentID;
    void /* function */ previewItemTitle;
    void /* unknown type, empty encoding */ previewItemURL;
    void /* unknown type, empty encoding */ originalPreviewItemURL;
}

@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, copy) NSURL *previewItemURL;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
