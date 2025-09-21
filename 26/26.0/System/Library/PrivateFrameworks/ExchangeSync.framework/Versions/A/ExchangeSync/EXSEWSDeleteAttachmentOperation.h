@class EXSAttachment;

@interface EXSEWSDeleteAttachmentOperation : EXSEWSOperation

@property (retain, nonatomic) EXSAttachment *attachment;

- (id)initWithProtocol:(id)a0;
- (void).cxx_destruct;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;

@end
