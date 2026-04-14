@class NSString;

@interface PXPeoplePickerMockPerson : PHPerson

@property (retain, nonatomic) NSString *mockName;
@property (retain, nonatomic) NSString *mockLocalIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)localIdentifier;
- (id)initWithLocalIdentifier:(id)a0 displayName:(id)a1;
- (id)px_localizedName;

@end
