@class EXSAttachment;

@interface EXSEWSCreateAttachmentOperation : EXSEWSOperation

@property (retain, nonatomic) EXSAttachment *attachment;

- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0;
- (char)executeWithChangeItem:(id)a0 error:(id *)a1;

@end
