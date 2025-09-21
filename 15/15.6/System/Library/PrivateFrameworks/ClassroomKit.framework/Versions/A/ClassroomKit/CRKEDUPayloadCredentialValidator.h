@class CRKEDUPayload;

@interface CRKEDUPayloadCredentialValidator : NSObject

@property (readonly, nonatomic) CRKEDUPayload *payload;
@property (readonly, nonatomic, getter=isStub) char stub;
@property (readonly, nonatomic, getter=isEphemeralMultiUserDevice) char ephemeralMultiUserDevice;

- (void).cxx_destruct;
- (char)isInstructor;
- (char)isStudent;
- (char)validateLeaderAnchorsWithError:(id *)a0;
- (char)validateMemberAnchorsWithError:(id *)a0;
- (char)areCredentialsValidForOneToOneDeviceWithError:(id *)a0;
- (char)areCredentialsValidForSharediPadDeviceWithError:(id *)a0;
- (char)areCredentialsValidWithError:(id *)a0;
- (char)hasPayloadCertificate;
- (id)initWithPayload:(id)a0 isStub:(char)a1 isEphemeralMultiUserDevice:(char)a2;
- (char)validateAnchorsWithKeyPath:(id)a0 payloadKey:(id)a1 error:(id *)a2;

@end
