@class PKSECredentialAddress, PKSEConsistencyCheckDeviceCredential;

@interface PKSEConsistencyCheckRequestedAction : NSObject

@property (readonly, nonatomic) long long actions;
@property (readonly, nonatomic) PKSEConsistencyCheckDeviceCredential *deviceCredential;
@property (readonly, nonatomic) PKSECredentialAddress *address;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithActions:(long long)a0 deviceCredential:(id)a1 address:(id)a2;

@end
