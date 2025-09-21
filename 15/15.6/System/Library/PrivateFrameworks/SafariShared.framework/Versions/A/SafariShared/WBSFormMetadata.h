@class NSNumber, NSString, NSDictionary, NSURL, NSArray, NSData, WBSFormControlMetadata;

@interface WBSFormMetadata : NSObject <NSSecureCoding, NSMutableCopying> {
    NSNumber *_containsAtLeastOneSecureTextField;
    unsigned long long _type;
    NSArray *_controls;
    NSString *_userNameElementUniqueID;
    NSString *_passwordElementUniqueID;
    NSString *_confirmPasswordElementUniqueID;
    NSString *_oldPasswordElementUniqueID;
    NSString *_firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *passwordRequirements;
@property (readonly, nonatomic) char allowsAutocomplete;
@property (readonly, copy, nonatomic) NSDictionary *annotations;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *confirmPasswordElementUniqueID;
@property (readonly, nonatomic) char containsActiveElement;
@property (readonly, copy, nonatomic) NSString *firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
@property (readonly, nonatomic) NSURL *action;
@property (readonly, copy, nonatomic) NSArray *controls;
@property (readonly, nonatomic) long long uniqueID;
@property (readonly, nonatomic) NSString *logicalFormElementSelector;
@property (readonly, nonatomic, getter=isBestForPageLevelAutoFill) char bestForPageLevelAutoFill;
@property (readonly, nonatomic, getter=isBestForStreamlinedLogin) char bestForStreamlinedLogin;
@property (readonly, nonatomic, getter=isEligibleForAutomaticLogin) char eligibleForAutomaticLogin;
@property (readonly, nonatomic, getter=isVisible) char visible;
@property (readonly, nonatomic) char usesRelAsync;
@property (readonly, copy, nonatomic) NSString *oldPasswordElementUniqueID;
@property (readonly, copy, nonatomic) NSString *passwordElementUniqueID;
@property (readonly, copy, nonatomic) NSString *textSample;
@property (readonly, copy, nonatomic) NSString *userNameElementUniqueID;
@property (readonly, nonatomic) char usesGeneratedPassword;
@property (readonly, nonatomic) unsigned long long requestType;
@property (readonly, nonatomic) char isSearchForm;
@property (readonly, nonatomic) char containsAtLeastOneSecureTextField;
@property (readonly, nonatomic) char containsClassifications;
@property (readonly, nonatomic) NSArray *uniqueIDsOfPasswordControlAndRelatedControls;
@property (readonly, nonatomic) NSString *userNameFieldValue;
@property (readonly, nonatomic) NSString *passwordFieldValue;
@property (readonly, nonatomic) WBSFormControlMetadata *bestControlForStreamlinedLoginFocus;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSData *serializedData;

+ (id)formMetadataFromSerializedData:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)_init;
- (id)initWithMetadata:(id)a0;
- (id)_valueOfControlWithUniqueID:(id)a0;
- (id)dictionaryRepresentationRedactingSensitiveValues:(char)a0 withKnownSensitiveValues:(id)a1;
- (id)formMetadataByReplacingControlsWith:(id)a0;
- (id)initWithJSValue:(id)a0;

@end
