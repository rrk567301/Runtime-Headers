@class NSString;

@interface PXPeoplePickerMockPerson : PHPerson

@property (retain, nonatomic) NSString *mockName;
@property (retain, nonatomic) NSString *mockLocalIdentifier;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)localIdentifier;
- (id)px_localizedName;
- (id)initWithLocalIdentifier:(id)a0 displayName:(id)a1;

@end
