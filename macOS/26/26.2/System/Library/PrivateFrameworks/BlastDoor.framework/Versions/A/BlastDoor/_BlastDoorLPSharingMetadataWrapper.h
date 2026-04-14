@class _BlastDoorLPLinkMetadata;

@interface _BlastDoorLPSharingMetadataWrapper : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _BlastDoorLPLinkMetadata *metadata;
@property (nonatomic) BOOL hasFetchedSubresources;
@property (nonatomic) BOOL hasCompletedFetch;

- (id)initWithCoder:(id)a0;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
