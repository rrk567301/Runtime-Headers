@class NSString, NSFileProviderDiagnosticAttributesDescriptor;

@interface FPImportItemPendingReconciliation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *itemIdentifier;
@property (copy, nonatomic) NSFileProviderDiagnosticAttributesDescriptor *diagnosticAttributes;
@property (nonatomic) BOOL itemPendingReconciliationIsLocked;
@property (nonatomic) BOOL itemPendingReconciliationIsLockedInDB;
@property (nonatomic) long long itemPendingReconciliationJobCode;
@property (nonatomic) long long itemPendingReconciliationJobSchedulingState;
@property (nonatomic) long long itemPendingReconciliationJobBlockingCode;

- (id)json;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithItemIdentifier:(id)a0;

@end
