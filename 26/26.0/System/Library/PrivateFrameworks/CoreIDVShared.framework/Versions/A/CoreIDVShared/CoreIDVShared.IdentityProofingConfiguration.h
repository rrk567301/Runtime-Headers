@class NSString;

@interface CoreIDVShared.IdentityProofingConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ country;
    void /* unknown type, empty encoding */ targetDevice;
    void /* unknown type, empty encoding */ actionStatus;
    void /* unknown type, empty encoding */ credentialIdentifier;
    void /* unknown type, empty encoding */ productIdentifier;
    void /* unknown type, empty encoding */ axSettings;
    void /* unknown type, empty encoding */ accountKeyIdentifier;
    void /* unknown type, empty encoding */ extendedReviewURLString;
    void /* unknown type, empty encoding */ learnMoreURLString;
    void /* unknown type, empty encoding */ supplementalProvisioningData;
    void /* unknown type, empty encoding */ documentType;
    void /* unknown type, empty encoding */ isPairedWatchUnsupported;
    void /* unknown type, empty encoding */ proofingErrorMessage;
    void /* unknown type, empty encoding */ piiTokenIdentifier;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
