@class NSArray, BlastDoorFileTransferAttribute_ImageInfo, NSString, NSNumber, BlastDoorFileTransferAttributeAttachmentSubtypeWrapper;

@interface BlastDoorFileTransferAttribute : NSObject {
    void /* function */ attachments;
    void /* function */ name;
    void /* function */ utiType;
    void /* function */ mimeType;
}

@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, retain) BlastDoorFileTransferAttribute_ImageInfo *imageInfo;
@property (nonatomic, retain) BlastDoorFileTransferAttributeAttachmentSubtypeWrapper *attachmentSubtype;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long datasize;
@property (nonatomic, copy) NSString *utiType;
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic, retain) NSNumber *legacyAnimoji;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
