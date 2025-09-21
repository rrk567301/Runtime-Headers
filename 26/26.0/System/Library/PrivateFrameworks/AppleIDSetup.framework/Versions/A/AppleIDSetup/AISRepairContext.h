@class NSString;

@interface AISRepairContext : AISSetupContext

@property (readonly, copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *userProfileIdentifier;

- (id)initWithAltDSID:(id)a0;
- (void).cxx_destruct;
- (id)initWithUserProfileIdentifier:(id)a0;

@end
