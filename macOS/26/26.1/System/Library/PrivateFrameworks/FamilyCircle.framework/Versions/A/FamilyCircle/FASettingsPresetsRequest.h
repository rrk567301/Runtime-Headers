@class NSString, NSNumber;

@interface FASettingsPresetsRequest : FAFamilyCircleRequest

@property (retain, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSNumber *childAge;
@property (retain, nonatomic) NSString *storeFront;
@property (retain, nonatomic) NSString *version;

- (void).cxx_destruct;
- (id)initWithFamilyMember:(id)a0;
- (id)fetchCachedPresets;
- (void)fetchCachedPresetsWithCompletion:(id /* block */)a0;
- (id)fetchPresets;
- (void)fetchPresetsWithCompletion:(id /* block */)a0;
- (id)initWithChildAge:(id)a0;
- (id)initWithChildAge:(id)a0 storeFront:(id)a1 version:(id)a2;
- (id)initWithFamilyMember:(id)a0 storeFront:(id)a1 version:(id)a2;
- (id)initWithFamilyMemberAltDSID:(id)a0;
- (id)initWithFamilyMemberAltDSID:(id)a0 storeFront:(id)a1 version:(id)a2;

@end
