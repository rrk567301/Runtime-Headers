@interface BlastDoor._BlastDoorCKUserIdentityLookupInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ emailAddress;
    void /* unknown type, empty encoding */ phoneNumber;
    void /* unknown type, empty encoding */ userRecordID;
    void /* unknown type, empty encoding */ shouldReportMissingIdentity;
    void /* unknown type, empty encoding */ encryptedPersonalInfo;
    void /* unknown type, empty encoding */ EmailAddressKey;
    void /* unknown type, empty encoding */ PhoneNumberKey;
    void /* unknown type, empty encoding */ RecordIDKey;
    void /* unknown type, empty encoding */ ReportsMissingKey;
    void /* unknown type, empty encoding */ EncryptedPersonalInfoKey;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
