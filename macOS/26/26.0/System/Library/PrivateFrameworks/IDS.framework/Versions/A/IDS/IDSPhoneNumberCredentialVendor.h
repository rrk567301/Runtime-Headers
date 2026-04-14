@interface IDSPhoneNumberCredentialVendor : NSObject

- (void)requestPhoneNumberCredentialForService:(long long)a0 simLabelID:(id)a1 requestOption:(long long)a2 withCompletion:(id /* block */)a3;
- (void)requestPhoneNumberCredentialForService:(long long)a0 simLabelID:(id)a1 withCompletion:(id /* block */)a2;

@end
