@class _BlastDoorLPLinkMetadata;

@interface _BlastDoorLPMessagesPayload : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) _BlastDoorLPLinkMetadata *metadata;
@property (nonatomic, getter=isPlaceholder) char placeholder;
@property (nonatomic) char needsSubresourceFetch;
@property (nonatomic) char needsCompleteFetch;

+ (id)linkWithDataRepresentation:(id)a0 attachments:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dataRepresentationWithOutOfLineAttachments:(id *)a0;
- (char)_needsWorkaroundForAppStoreTransformerCrash;

@end
