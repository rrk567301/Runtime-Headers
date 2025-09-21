@class HKCDADocument;

@interface HKCDADocumentSample : HKDocumentSample {
    long long _omittedContentFlags;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _contentLock;
}

@property (readonly) HKCDADocument *document;

+ (char)supportsSecureCoding;
+ (id)CDADocumentSampleWithData:(id)a0 startDate:(id)a1 endDate:(id)a2 metadata:(id)a3 validationError:(id *)a4;
+ (id)_comparisonExpressionForValue:(id)a0 operatorType:(unsigned long long)a1;
+ (id)_globStringToRegexString:(id)a0;
+ (char)_isConcreteObjectClass;
+ (char)_isValidCDAKeyPath:(id)a0;
+ (char)_isValidOperatorType:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_applyPropertiesWithOmittedFlags:(long long)a0 compressedDocumentData:(id)a1 title:(id)a2 patientName:(id)a3 authorName:(id)a4 custodianName:(id)a5;
- (id)_fieldValueForKeyPath:(id)a0;
- (long long)_omittedContentFlags;
- (char)_predicateMatchForKeyPath:(id)a0 pattern:(id)a1;
- (void)_processDocumentData:(id)a0 extractedFields:(id)a1;
- (char)_validateDocumentContentWithError:(id *)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned long long x1; })a0;
- (char)prepareForDelivery:(id *)a0;
- (char)prepareForSaving:(id *)a0;

@end
