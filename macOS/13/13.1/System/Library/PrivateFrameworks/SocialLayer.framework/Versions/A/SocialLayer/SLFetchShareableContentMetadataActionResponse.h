@class SLShareableContentMetadata;

@interface SLFetchShareableContentMetadataActionResponse : SLShareableContentActionResponse

@property (retain, nonatomic) SLShareableContentMetadata *metadata;

+ (BOOL)supportsSecureCoding;
+ (id)responseWithMetadata:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
