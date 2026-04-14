@interface WFItemProviderRequestMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)registeredTypeIdentifiers;
- (void)fetchLinkMetadataWithCompletion:(id /* block */)a0;

@end
