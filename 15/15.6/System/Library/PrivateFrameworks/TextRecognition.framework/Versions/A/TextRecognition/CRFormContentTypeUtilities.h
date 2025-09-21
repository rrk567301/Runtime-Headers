@interface CRFormContentTypeUtilities : NSObject

+ (char)contentTypeIsBirthdayComponent:(unsigned long long)a0;
+ (unsigned long long)contentTypeFromString:(id)a0;
+ (char)contentTypeIsAddressComponent:(unsigned long long)a0;
+ (char)contentTypeIsAutoFillable:(unsigned long long)a0;
+ (char)contentTypeIsComponentType:(unsigned long long)a0 previousType:(unsigned long long)a1 nextType:(unsigned long long)a2;
+ (char)contentTypeIsCreditCardComponent:(unsigned long long)a0;
+ (char)contentTypeIsDateComponent:(unsigned long long)a0;
+ (char)contentTypeIsStartOfAutofillContext:(unsigned long long)a0 previousType:(unsigned long long)a1 nextType:(unsigned long long)a2;
+ (char)contentTypeIsTelephoneComponent:(unsigned long long)a0;
+ (id)shortStringFromContentType:(unsigned long long)a0;
+ (char)shouldAssignTextContentTypeForField:(id)a0 updateExternalFields:(char)a1 allowOverride:(char)a2 allowAllDetectionSources:(char)a3;
+ (id)stringFromContentType:(unsigned long long)a0;

@end
