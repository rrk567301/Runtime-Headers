@class NSArray, HDAssertion, HDAttachment;

@interface HDInsertAttachmentOperation : HDJournalableOperation {
    HDAttachment *_attachment;
    NSArray *_attachmentReferences;
    BOOL _fileOnDisk;
    HDAssertion *_assertion;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithAttachmentReferences:(id)a0 attachment:(id)a1 fileOnDisk:(BOOL)a2;
- (id)transactionContext;

@end
