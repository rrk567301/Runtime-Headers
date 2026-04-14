@class NGMFullPrekey, NGMPublicDeviceIdentity;

@interface NGMKeyRollingTicket : NSObject

@property (readonly, nonatomic) NGMFullPrekey *prekey;
@property (readonly, nonatomic) NGMPublicDeviceIdentity *registrationInfo;

- (id)prekeyData;
- (void).cxx_destruct;
- (id)identityData;
- (id)publicDeviceIdentity;
- (id)initTicketWithSigningKey:(id)a0 error:(id *)a1;

@end
