@class NSString, NSDictionary, NSArray;
@protocol NSObject, NSCopying;

@interface PKPaymentSetupField : NSObject

@property (copy, nonatomic) NSString *localizedPlaceholder;
@property (copy, nonatomic) NSString *displayFormat;
@property (nonatomic, getter=isOptional) BOOL optional;
@property (nonatomic, getter=isReadonly) BOOL readonly;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (copy, nonatomic) NSString *submissionKey;
@property (copy, nonatomic) NSString *submissionDestination;
@property (nonatomic) BOOL requiresSecureSubmission;
@property (readonly, copy, nonatomic) NSDictionary *rawConfigurationDictionary;
@property (readonly, nonatomic, getter=isBuiltIn) BOOL builtIn;
@property (copy, nonatomic) NSString *defaultValue;
@property (nonatomic) BOOL populateFromMeCard;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long fieldType;
@property (copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *compactLocalizedDisplayName;
@property (copy, nonatomic) id<NSObject, NSCopying> currentValue;
@property (copy, nonatomic) id<NSObject, NSCopying> originalCameraCaptureValue;
@property (nonatomic, getter=isCurrentValueFromCameraCapture) BOOL currentValueFromCameraCapture;
@property (readonly, copy, nonatomic) NSString *odiAttribute;
@property (readonly, copy, nonatomic) NSArray *requirements;

+ (id)paymentSetupFieldWithIdentifier:(id)a0;
+ (id)paymentSetupFieldWithIdentifier:(id)a0 type:(unsigned long long)a1;
+ (id)paymentSetupFieldWithIdentifier:(id)a0 configuration:(id)a1;
+ (Class)classForIdentifier:(id)a0 type:(unsigned long long)a1;
+ (id)newRandomlyGeneratedField;
+ (id)sampleCustomPaymentSetupFields;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)displayString;
- (id)initWithIdentifier:(id)a0 configuration:(id)a1;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (void)updateWithConfiguration:(id)a0;
- (BOOL)isFieldTypeText;
- (BOOL)isFieldTypeDate;
- (BOOL)isFieldTypeLabel;
- (BOOL)isFieldTypeFooter;
- (BOOL)isFieldTypePicker;
- (BOOL)_shouldStripDiacritics;
- (id)textFieldObject;
- (id)dateFieldObject;
- (id)labelFieldObject;
- (id)footerFieldObject;
- (id)pickerFieldObject;
- (id)submissionString;
- (id)_submissionStringForValue:(id)a0;
- (BOOL)submissionStringMeetsAllRequirements;
- (void)_setLocalizedDisplayName:(id)a0;
- (void)noteCurrentValueChanged;

@end
