@class NSString;

@interface IMDIdentityLookupDecisioningManager : NSObject <IMDIdentityLookupDecisioningManaging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (BOOL)filterMessage:(id)a0 fromSender:(id)a1 receiverISOCountryCode:(id)a2 extensionID:(id)a3 withCompletion:(id /* block */)a4;
- (BOOL)requestFilterCapabilitiesForExtensionID:(id)a0 withCompletion:(id /* block */)a1;

@end
