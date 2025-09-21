@interface MLModelErrorUtils : NSObject

+ (id)errorWithCode:(long long)a0 format:(id)a1;
+ (id)IOErrorWithFormat:(id)a0;
+ (id)customLayerErrorWithUnderlyingError:(id)a0 withFormat:(id)a1;
+ (id)errorWithCode:(long long)a0 format:(id)a1 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a2;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1 format:(id)a2;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1 format:(id)a2 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a3;
+ (id)errorWithIntegerCode:(long long)a0 underlyingError:(id)a1 format:(id)a2 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a3;
+ (id)featureTypeErrorWithFormat:(id)a0;
+ (id)genericErrorWithFormat:(id)a0;
+ (id)modelDecryptionErrorWithUnderlyingError:(id)a0 format:(id)a1;
+ (id)modelDecryptionKeyFetchErrorWithUnderlyingError:(id)a0 format:(id)a1;
+ (id)modelEncryptionErrorWithUnderlyingError:(id)a0 format:(id)a1;
+ (id)parameterErrorWithUnderlyingError:(id)a0 format:(id)a1;
+ (id)privateErrorWithCode:(long long)a0 underlyingError:(id)a1 format:(id)a2 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a3;
+ (id)programEvaluationErrorWithUnderlyingError:(id)a0 format:(id)a1;
+ (id)programParsingAtLoadErrorWithReason:(int)a0 format:(id)a1;
+ (id)programValidationAtLoadErrorWithReason:(int)a0 format:(id)a1;
+ (id)updateErrorWithFormat:(id)a0;

@end
