@interface TCPAddressTokenAttachmentCell : NSTokenAttachmentCell

@property (nonatomic) char displayAsExternal;
@property char neverShowSeparator;

+ (id)colorForExternalDomain;

- (id)_immediateActionAnimationControllerForTokenAttachment:(id)a0 inTextView:(id)a1;
- (id)tokenTintColor;

@end
