@class NSString, HDAssertion;

@interface HDIngestDeviceContextsOperation : HDJournalableOperation {
    HDAssertion *_assertion;
    NSString *_containerIdentifier;
}

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessibilityAssertion:(id)a0 containerIdentifier:(id)a1;
- (char)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)transactionContext;

@end
