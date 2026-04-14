@interface CHSMutableConfiguredWidgetDescriptor : CHSConfiguredWidgetDescriptor

@property (nonatomic, getter=isSuggestion) BOOL suggestion;
@property (nonatomic, getter=isSystemConfigured) BOOL systemConfigured;
@property (nonatomic) BOOL supportsTinting;
@property (nonatomic) BOOL showsWidgetLabel;
@property (nonatomic) BOOL showsComplicationLabel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSuggestion:(BOOL)a0;
- (void)setSystemConfigured:(BOOL)a0;
- (void)setSupportsTinting:(BOOL)a0;
- (void)setShowsWidgetLabel:(BOOL)a0;

@end
