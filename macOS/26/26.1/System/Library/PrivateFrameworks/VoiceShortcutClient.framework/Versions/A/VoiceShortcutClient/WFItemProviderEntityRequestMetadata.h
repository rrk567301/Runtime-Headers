@class LNEntityMetadata, LNEntity;

@interface WFItemProviderEntityRequestMetadata : WFItemProviderRequestMetadata

@property (readonly, nonatomic) LNEntity *entity;
@property (readonly, nonatomic) LNEntityMetadata *metadata;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)registeredTypeIdentifiers;
- (void)fetchLinkMetadataWithCompletion:(id /* block */)a0;
- (id)initWithEntity:(id)a0 metadata:(id)a1;

@end
