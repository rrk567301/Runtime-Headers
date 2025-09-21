@class LPLinkMetadata;

@interface LPSharingMetadataWrapper : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) LPLinkMetadata *metadata;
@property (nonatomic) char hasFetchedSubresources;
@property (nonatomic) char hasCompletedFetch;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dataRepresentation;

@end
