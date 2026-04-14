@class NSString;

@interface WKPromisedAttachmentContext : NSObject {
    struct RetainPtr<NSString> { NSString *m_ptr; } _fileName;
    struct RetainPtr<NSString> { NSString *m_ptr; } _attachmentIdentifier;
}

@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSString *attachmentIdentifier;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 fileName:(id)a1;

@end
