@class NSString, NSFileProviderDiagnosticAttributesDescriptor;

@interface FPImportItemPendingScanningProvider : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *itemIdentifier;
@property (copy, nonatomic) NSFileProviderDiagnosticAttributesDescriptor *diagnosticAttributes;
@property (nonatomic) long long itemPendingScanningProviderEnumerationStatus;
@property (nonatomic) BOOL itemPendingScanningProviderHasMultiplePagesEnumeration;
@property (nonatomic) long long itemPendingScanningProviderNumberOfChildren;
@property (nonatomic) long long itemPendingScanningProviderNumberOfChildrenPendingCreation;
@property (nonatomic) long long itemPendingScanningProviderNumberOfChildrenFailingCreation;
@property (nonatomic) long long itemPendingScanningProviderRemovalOfDatalessBitStatus;

- (id)json;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
