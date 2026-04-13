@class NSString, ACAccount, AALocalContactInfo;

@interface AOSUIMyBenefactorActionHandler : NSObject <AOSUIAccountContactDetailsActionHandler>

@property (retain, nonatomic) ACAccount *appleAccount;
@property (readonly) AALocalContactInfo *contactInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
