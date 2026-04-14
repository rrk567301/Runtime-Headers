@class NSColor, NSAttributedString, LPCaptionButtonPresentationProperties;

@interface LPConcretePresentationPropertiesParameters : NSObject

@property (readonly, nonatomic) BOOL usesComputedPresentationProperties;
@property (readonly, nonatomic) BOOL inComposeContext;
@property (readonly, nonatomic) BOOL inSenderContext;
@property (readonly, nonatomic) unsigned long long effectiveSizeClass;
@property (readonly, nonatomic) NSColor *overrideSubtitleButtonColor;
@property (readonly, nonatomic) NSColor *overrideActionButtonColor;
@property (readonly, nonatomic) NSAttributedString *overrideSubtitle;
@property (readonly, nonatomic) LPCaptionButtonPresentationProperties *captionButton;
@property (readonly, nonatomic) LPCaptionButtonPresentationProperties *captionTextButton;

- (void).cxx_destruct;
- (id)initWithUsesComputedPresentationProperties:(BOOL)a0 inComposeContext:(BOOL)a1 inSenderContext:(BOOL)a2 effectiveSizeClass:(unsigned long long)a3 overrideSubtitleButtonColor:(id)a4 overrideActionButtonColor:(id)a5 overrideSubtitle:(id)a6 captionButton:(id)a7 captionTextButton:(id)a8;

@end
