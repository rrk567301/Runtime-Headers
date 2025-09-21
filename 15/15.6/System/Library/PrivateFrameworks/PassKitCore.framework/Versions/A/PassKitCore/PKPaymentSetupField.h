@class NSString, NSDictionary, NSArray;
@protocol NSObject, NSCopying;

@interface PKPaymentSetupField : NSObject <NSCopying>

@property (copy, nonatomic) NSString *localizedPlaceholder;
@property (copy, nonatomic) NSString *displayFormat;
@property (nonatomic, getter=isOptional) char optional;
@property (copy, nonatomic) NSString *submissionKey;
@property (copy, nonatomic) NSString *submissionDestination;
@property (nonatomic) char requiresSecureSubmission;
@property (readonly, copy, nonatomic) NSDictionary *rawConfigurationDictionary;
@property (readonly, nonatomic, getter=isBuiltIn) char builtIn;
@property (copy, nonatomic) NSString *defaultValue;
@property (nonatomic) char populateFromMeCard;
@property (nonatomic, getter=isHidden) char hidden;
@property (nonatomic, getter=isReadonly) char readonly;
@property (nonatomic) unsigned long long source;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long fieldType;
@property (copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *compactLocalizedDisplayName;
@property (readonly, nonatomic) long long groupNumber;
@property (copy, nonatomic) id<NSObject, NSCopying> currentValue;
@property (copy, nonatomic) id<NSObject, NSCopying> originalCameraCaptureValue;
@property (nonatomic, getter=isCurrentValueFromCameraCapture) char currentValueFromCameraCapture;
@property (readonly, copy, nonatomic) NSString *odiAttribute;
@property (readonly, copy, nonatomic) NSArray *requirements;
@property (readonly, nonatomic) char supportsAddressAutofill;

+ (Class)classForIdentifier:(id)a0 type:(unsigned long long)a1;
+ (id)newRandomlyGeneratedField;
+ (id)paymentSetupFieldWithIdentifier:(id)a0;
+ (id)paymentSetupFieldWithIdentifier:(id)a0 configuration:(id)a1;
+ (id)paymentSetupFieldWithIdentifier:(id)a0 type:(unsigned long long)a1;
+ (id)sampleCustomPaymentSetupFields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)displayString;
- (id)initWithIdentifier:(id)a0 configuration:(id)a1;
- (void)updateWithConfiguration:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (char)isFieldTypeDate;
- (id)dateFieldObject;
- (char)isFieldTypeText;
- (id)textFieldObject;
- (void)_setLocalizedDisplayName:(id)a0;
- (char)_shouldStripDiacritics;
- (id)_submissionStringForValue:(id)a0;
- (id)footerFieldObject;
- (char)isFieldTypeFooter;
- (char)isFieldTypeLabel;
- (char)isFieldTypePicker;
- (id)labelFieldObject;
- (void)noteCurrentValueChanged;
- (id)pickerFieldObject;
- (char)preventVoiceOver;
- (id)submissionString;
- (char)submissionStringMeetsAllRequirements;
- (char)submissionStringMeetsValidationRegex;

@end
