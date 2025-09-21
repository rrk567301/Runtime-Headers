@class NSString, ICAttachment, NSManagedObjectContext;

@interface ICGalleryAttachmentViewSubAttachmentItem : NSObject

@property (copy, nonatomic) NSString *attachmentIdentifier;
@property (retain, nonatomic) ICAttachment *attachment;
@property (retain, nonatomic) NSManagedObjectContext *context;
@property (nonatomic) struct CGSize { double width; double height; } size;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)updateSize;
- (void)invalidateSize;
- (id)initWithAttachmentIdentifier:(id)a0 context:(id)a1;

@end
