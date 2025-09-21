@class NSData;

@interface EWSFileAttachmentType : EWSAttachmentType

@property (retain, nonatomic) NSData *Content;
@property (nonatomic) char IsContactPhoto;
@property (nonatomic) char IsContactPhotoSpecified;

+ (id)definition;

- (void).cxx_destruct;

@end
