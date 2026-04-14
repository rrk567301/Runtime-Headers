@class NSArray, NSString;
@protocol AutoFillCredentialPickerProtocol;

@interface AutoFillCredentialPickerCoordinator : NSObject <AutoFillCredentialPickerProtocol> {
    id<AutoFillCredentialPickerProtocol> _credentialPicker;
}

@property (copy, nonatomic) NSArray *domainHintStringsForPasswordSuggestions;
@property (copy, nonatomic) NSArray *serviceNameHintStringsForPasswordSuggestions;
@property (copy, nonatomic) NSString *suggestedDomainForNewAccount;
@property (nonatomic) BOOL bypassLockoutPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
