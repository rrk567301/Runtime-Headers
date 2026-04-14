@class NSColor, NSString;

@interface AVPlayerControlsConfigurator : NSObject

@property (retain, nonatomic) NSColor *tintColor;
@property (retain, nonatomic) NSString *fontStyle;
@property (nonatomic) long long symbolScale;

+ (id)defaultConfigurator;
+ (id)floatingControlsConfigurator;
+ (id)inlineControlsConfigurator;

- (void).cxx_destruct;
- (void)configureRoutePicker:(id)a0;
- (id)configuredSymbolForImageName:(id)a0;
- (id)initWithTintColor:(id)a0 fontStyle:(id)a1 symbolScale:(long long)a2;

@end
