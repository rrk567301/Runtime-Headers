@class LPCaptionButtonCollapsedPresentationProperties, NSString, LPImage, NSAttributedString, NSColor;

@interface LPCaptionButtonPresentationProperties : NSObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) LPImage *icon;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) LPCaptionButtonCollapsedPresentationProperties *collapsedButton;

- (void).cxx_destruct;

@end
