@interface PADescriptionUtilities : NSObject

+ (id)autoEnhanceAllowedOpertionIdentifiers;
+ (id)videoComplementWhiteListOperationIdentifiers;
+ (id)autoEnhanceRequiredOpertionIdentifiers;
+ (id)_renderDescription:(id)a0 matchesAllowedOperationIdentifiers:(id)a1 requiredOperationIdentifiers:(id)a2;
+ (BOOL)isRenderDescriptionAutoEnhanceOnly:(id)a0 asset:(id)a1;

@end
