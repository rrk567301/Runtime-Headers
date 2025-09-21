@class NSArray, NSString;

@interface AMSDeviceOfferRegistrationGroup : NSObject <AMSStorageDatabasePersistable>

@property (readonly) NSArray *registrationItems;
@property unsigned long long validationOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithRegistrationItems:(id)a0 validationOptions:(unsigned long long)a1;
- (char)_serialsMatchSerialsFromGroup:(id)a0;
- (id)initWithDatabaseEntry:(id)a0;
- (id)initWithRegistrationItems:(id)a0;
- (char)isEqualToRegistrationGroup:(id)a0;
- (char)isModifiedVersionOfGroup:(id)a0;
- (id)serializeToDictionary;

@end
