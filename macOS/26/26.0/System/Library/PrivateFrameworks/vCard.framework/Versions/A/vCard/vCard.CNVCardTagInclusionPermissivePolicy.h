@interface vCard.CNVCardTagInclusionPermissivePolicy : NSObject <vCard.CNVCardTagInclusionPolicy>

@property (nonatomic) BOOL shouldCaptureUnknownTags;

- (id)init;
- (BOOL)shouldParseTag:(id)a0;

@end
