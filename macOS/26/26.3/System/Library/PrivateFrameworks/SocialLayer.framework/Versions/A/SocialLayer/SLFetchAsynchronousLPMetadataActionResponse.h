@class LPLinkMetadata;

@interface SLFetchAsynchronousLPMetadataActionResponse : SLShareableContentActionResponse

@property (retain, nonatomic) LPLinkMetadata *metadata;

+ (BOOL)supportsSecureCoding;
+ (id)responseWithMetadata:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
