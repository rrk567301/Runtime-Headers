@class LPLinkMetadata;

@interface LPMessagesPayload : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) LPLinkMetadata *metadata;
@property (nonatomic, getter=isPlaceholder) char placeholder;
@property (nonatomic) char needsSubresourceFetch;
@property (nonatomic) char needsCompleteFetch;

+ (id)linkWithDataRepresentation:(id)a0 attachments:(id)a1;
+ (id)_linkWithDataRepresentation:(id)a0 substitutingAttachments:(char)a1 attachments:(id)a2;
+ (id)linkWithDataRepresentationWithoutSubstitutingAttachments:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dataRepresentationWithOutOfLineAttachments:(id *)a0;
- (char)_needsWorkaroundForAppStoreTransformerCrash;
- (void)performSubstitutionWithAttachments:(id)a0;

@end
