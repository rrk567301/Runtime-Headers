@class NSString, NSFileProviderDiagnosticAttributesDescriptor;

@interface FPImportItemPendingReconciliation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *itemIdentifier;
@property (copy, nonatomic) NSFileProviderDiagnosticAttributesDescriptor *diagnosticAttributes;
@property (nonatomic) char itemPendingReconciliationIsLocked;
@property (nonatomic) char itemPendingReconciliationIsLockedInDB;
@property (nonatomic) long long itemPendingReconciliationJobCode;
@property (nonatomic) long long itemPendingReconciliationJobSchedulingState;
@property (nonatomic) long long itemPendingReconciliationJobBlockingCode;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItemIdentifier:(id)a0;
- (id)json;

@end
