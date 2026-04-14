@interface PADescriptionUtilities : NSObject

+ (id)autoEnhanceAllowedOpertionIdentifiers;
+ (id)autoEnhanceRequiredOpertionIdentifiers;
+ (id)_renderDescription:(id)a0 matchesAllowedOperationIdentifiers:(id)a1 requiredOperationIdentifiers:(id)a2;
+ (id)videoComplementWhiteListOperationIdentifiers;
+ (BOOL)isRenderDescriptionAutoEnhanceOnly:(id)a0 asset:(id)a1;

@end
