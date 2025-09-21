@interface PPConnectionsUtils : NSObject

+ (id)calendarUserActivityExternalIDKey;
+ (id)calendarUserActivityIdentifier;
+ (char)isClientAuthorizedForSemanticTriggers:(id)a0;
+ (char)isValidLinguisticQuery:(id)a0;
+ (unsigned char)locationFieldFromSemanticTag:(unsigned char)a0;
+ (char)shouldAggregateLabel:(id)a0 withValue:(id)a1 query:(id)a2;
+ (id)supportedLocationSemanticTypes;
+ (id)triggerTypeFromQuery:(id)a0;

@end
