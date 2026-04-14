@class IDSServerCertificate, NSData;

@interface IDSRegistrationCertificate : NSObject

@property (readonly, nonatomic) IDSServerCertificate *backingCertificate;
@property (readonly, nonatomic) NSData *dataRepresentation;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDataRepresentation:(id)a0;
- (id)initWithBackingCertificate:(id)a0;

@end
