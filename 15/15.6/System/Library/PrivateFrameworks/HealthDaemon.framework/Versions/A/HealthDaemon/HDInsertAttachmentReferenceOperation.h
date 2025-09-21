@class HDAttachmentReference;

@interface HDInsertAttachmentReferenceOperation : HDJournalableOperation {
    HDAttachmentReference *_reference;
}

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReference:(id)a0;
- (char)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
