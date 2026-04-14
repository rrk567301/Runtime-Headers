@class ICAttachment;

@interface ICMultipeerAttachmentRequest : ICMultipeerResourceRequest

@property (retain) ICAttachment *attachment;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)note;
- (void)startRequest;

@end
