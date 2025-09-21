@class NSArray;

@interface HDDeleteAttachmentReferenceOperation : HDJournalableOperation {
    NSArray *_references;
    long long _cloudStatus;
}

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReferences:(id)a0;
- (id)initWithSynchronizedReferences:(id)a0;
- (char)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
