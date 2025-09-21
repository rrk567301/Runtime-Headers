@class NSColor, NSAttributedString, LPCaptionButtonPresentationProperties;

@interface LPConcretePresentationPropertiesParameters : NSObject

@property (readonly, nonatomic) char usesComputedPresentationProperties;
@property (readonly, nonatomic) char inComposeContext;
@property (readonly, nonatomic) char inSenderContext;
@property (readonly, nonatomic) char allowsTapping;
@property (readonly, nonatomic) unsigned long long effectiveSizeClass;
@property (readonly, nonatomic) NSColor *overrideSubtitleButtonColor;
@property (readonly, nonatomic) NSColor *overrideActionButtonColor;
@property (readonly, nonatomic) NSAttributedString *overrideSubtitle;
@property (readonly, nonatomic) LPCaptionButtonPresentationProperties *captionButton;
@property (readonly, nonatomic) LPCaptionButtonPresentationProperties *captionTextButton;

- (void).cxx_destruct;
- (id)initWithUsesComputedPresentationProperties:(char)a0 inComposeContext:(char)a1 inSenderContext:(char)a2 allowsTapping:(char)a3 effectiveSizeClass:(unsigned long long)a4 overrideSubtitleButtonColor:(id)a5 overrideActionButtonColor:(id)a6 overrideSubtitle:(id)a7 captionButton:(id)a8 captionTextButton:(id)a9;

@end
