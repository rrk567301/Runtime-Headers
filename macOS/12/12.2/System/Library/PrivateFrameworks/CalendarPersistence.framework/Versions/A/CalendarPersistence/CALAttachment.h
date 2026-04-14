@class NSURL, NSManagedObjectID;

@interface CALAttachment : CALPropertyValue

@property (retain) NSManagedObjectID *managedObjectID;
@property (retain) NSURL *cachedURL;

+ (id)attachmentWithURL:(id)a0;
+ (id)attachmentFromManagedObject:(id)a0;

- (id)description;
- (id)data;
- (id)initWithData:(id)a0;
- (id)initWithURL:(id)a0;
- (void)setData:(id)a0;
- (void).cxx_destruct;
- (void)setURL:(id)a0;
- (id)url;
- (id)contentType;
- (void)setContentType:(id)a0;
- (id)filename;
- (void)setFilename:(id)a0;
- (id)icon;
- (id)previewItemURL;
- (id)filenameParameter;
- (id)attachmentId;
- (void)setAttachmentId:(id)a0;
- (BOOL)isAutoArchived;
- (void)setAutoArchived:(BOOL)a0;

@end
