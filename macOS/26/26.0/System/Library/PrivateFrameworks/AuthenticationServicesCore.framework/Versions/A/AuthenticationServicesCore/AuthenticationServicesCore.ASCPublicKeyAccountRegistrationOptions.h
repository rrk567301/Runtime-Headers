@interface AuthenticationServicesCore.ASCPublicKeyAccountRegistrationOptions : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ acceptedContactIdentifiers;
    void /* unknown type, empty encoding */ shouldRequestName;
    void /* unknown type, empty encoding */ challenge;
    void /* unknown type, empty encoding */ userID;
    void /* unknown type, empty encoding */ relyingPartyIdentifier;
    void /* unknown type, empty encoding */ test_shouldLoadContactData;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BOOL acceptedContactIdentifiersIsEmpty;
@property (nonatomic, readonly) BOOL acceptsPhoneNumberOnly;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
