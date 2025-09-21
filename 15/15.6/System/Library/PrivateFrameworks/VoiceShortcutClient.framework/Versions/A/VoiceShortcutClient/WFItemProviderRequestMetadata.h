@interface WFItemProviderRequestMetadata : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)registeredTypeIdentifiers;
- (void)fetchLinkMetadataWithCompletion:(id /* block */)a0;

@end
