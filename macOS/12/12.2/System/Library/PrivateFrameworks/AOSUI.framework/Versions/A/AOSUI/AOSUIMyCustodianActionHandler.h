@class NSString, AALocalContactInfo;

@interface AOSUIMyCustodianActionHandler : NSObject <AOSUIAccountContactDetailsActionHandler>

@property (readonly) AALocalContactInfo *contactInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)doDestructiveAction:(id)a0;
- (id)initWithLocalContact:(id)a0;

@end
