@class NSString, NSPersonNameComponents, _TtC26AuthenticationServicesCore14ASCPhoneNumber;

@interface AuthenticationServicesCore.ASCPasskeyAccountRegistrationUserState : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ name;
    void /* function */ emailAddress;
    void /* function */ selectedCredentialProviderExtensionIdentifier;
    void /* unknown type, empty encoding */ nameSuggestions;
    void /* unknown type, empty encoding */ emailAddressSuggestions;
    void /* unknown type, empty encoding */ phoneNumberSuggestions;
    void /* unknown type, empty encoding */ acceptedContactIdentifiers;
    void /* unknown type, empty encoding */ shouldRequestName;
    void /* unknown type, empty encoding */ cachedCanUseHideMyEmail;
    void /* unknown type, empty encoding */ lastCreatedHideMyEmail;
    void /* unknown type, empty encoding */ clientApplicationBundleID;
    void /* unknown type, empty encoding */ $__lazy_storage_$_appleAccount;
    void /* unknown type, empty encoding */ $__lazy_storage_$_appleAccountName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_meContact;
    void /* unknown type, empty encoding */ $__lazy_storage_$_simPhoneNumbers;
    void /* unknown type, empty encoding */ $__lazy_storage_$_forwardToEmailAddress;
    void /* unknown type, empty encoding */ $__lazy_storage_$_enabledExtensions;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sortedCredentialProviderIdentifiers;
    void /* unknown type, empty encoding */ $__lazy_storage_$_defaultPresentedContactIdentifier;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSPersonNameComponents *name;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, retain) _TtC26AuthenticationServicesCore14ASCPhoneNumber *phoneNumber;
@property (nonatomic, copy) NSString *selectedCredentialProviderExtensionIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
