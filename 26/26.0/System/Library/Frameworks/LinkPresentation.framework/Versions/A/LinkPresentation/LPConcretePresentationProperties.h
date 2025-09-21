@class LPCaptionButtonPresentationProperties;

@interface LPConcretePresentationProperties : LPWebLinkPresentationProperties

@property (retain, nonatomic) LPCaptionButtonPresentationProperties *captionButton;
@property (retain, nonatomic) LPCaptionButtonPresentationProperties *captionTextButton;
@property (retain, nonatomic) LPCaptionButtonPresentationProperties *secondaryCaptionButton;

- (void).cxx_destruct;
- (BOOL)hasMedia;
- (id)initWithParameters:(id)a0 properties:(id)a1;

@end
