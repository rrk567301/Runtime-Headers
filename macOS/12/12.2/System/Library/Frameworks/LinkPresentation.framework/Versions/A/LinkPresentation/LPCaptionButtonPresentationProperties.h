@class LPCaptionButtonCollapsedPresentationProperties, NSString, LPImage, NSColor;

@interface LPCaptionButtonPresentationProperties : NSObject

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) LPImage *icon;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) LPCaptionButtonCollapsedPresentationProperties *collapsedButton;

- (void).cxx_destruct;

@end
