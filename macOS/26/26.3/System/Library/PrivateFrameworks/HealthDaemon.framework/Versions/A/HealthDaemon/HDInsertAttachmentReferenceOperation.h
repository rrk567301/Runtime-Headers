@class HDAttachmentReference;

@interface HDInsertAttachmentReferenceOperation : HDJournalableOperation {
    HDAttachmentReference *_reference;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithReference:(id)a0;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
