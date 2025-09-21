@class NSArray, CHSWidgetDisplayProperties;
@protocol CHSWidgetRefreshStrategy;

@interface CHSMutableConfiguredWidgetDescriptor : CHSConfiguredWidgetDescriptor

@property (nonatomic, getter=isSuggestion) char suggestion;
@property (nonatomic, getter=isSystemConfigured) char systemConfigured;
@property (nonatomic) unsigned long long supportedColorSchemes;
@property (copy, nonatomic) NSArray *supportedRenderSchemes;
@property (nonatomic) char supportsLowLuminance;
@property (nonatomic) char showsWidgetLabel;
@property (copy, nonatomic) CHSWidgetDisplayProperties *displayProperties;
@property (retain, nonatomic) id<CHSWidgetRefreshStrategy> refreshStrategy;
@property (nonatomic) char supportsTinting;
@property (nonatomic) char showsComplicationLabel;
@property (nonatomic) unsigned long long supportedRenderingModes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDisplayProperties:(id)a0;
- (void)setSuggestion:(char)a0;
- (void)setRefreshStrategy:(id)a0;
- (void)setShowsWidgetLabel:(char)a0;
- (void)setSupportedColorSchemes:(unsigned long long)a0;
- (void)setSupportedRenderSchemes:(id)a0;
- (void)setSupportedRenderingModes:(unsigned long long)a0;
- (void)setSupportsLowLuminance:(char)a0;
- (void)setSupportsTinting:(char)a0;
- (void)setSystemConfigured:(char)a0;

@end
