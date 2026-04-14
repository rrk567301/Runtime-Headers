@class NSArray;

@interface HDDeleteAttachmentReferenceOperation : HDJournalableOperation {
    NSArray *_references;
    long long _cloudStatus;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithReferences:(id)a0;
- (id)initWithSynchronizedReferences:(id)a0;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
