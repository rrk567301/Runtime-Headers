@class IDSServerCertificate, NSData;

@interface IDSAuthenticationCertificate : NSObject

@property (readonly, nonatomic) IDSServerCertificate *backingCertificate;
@property (readonly, nonatomic) NSData *dataRepresentation;

- (id)initWithDataRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBackingCertificate:(id)a0;

@end
