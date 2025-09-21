@class _BlastDoorLPLinkMetadata;

@interface _BlastDoorLPSharingMetadataWrapper : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _BlastDoorLPLinkMetadata *metadata;
@property (nonatomic) char hasFetchedSubresources;
@property (nonatomic) char hasCompletedFetch;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dataRepresentation;

@end
