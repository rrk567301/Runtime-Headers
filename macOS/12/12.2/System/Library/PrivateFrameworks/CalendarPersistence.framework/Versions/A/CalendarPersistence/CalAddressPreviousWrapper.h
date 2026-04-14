@class NSString, NSNumber;

@interface CalAddressPreviousWrapper : CalAddressWrapper {
    NSString *_firstName;
    NSString *_lastName;
    NSString *_displayedName;
    NSString *_type;
    NSString *_loginName;
    NSNumber *_recentContactIDNumber;
}

- (void).cxx_destruct;
- (id)type;
- (id)firstName;
- (id)lastName;
- (id)displayedName;
- (id)completionForSubstring:(id)a0;
- (BOOL)isPerson;
- (BOOL)isLocation;
- (BOOL)isResource;
- (BOOL)fromPrevious;
- (id)initWithFirstName:(id)a0 lastName:(id)a1 displayedName:(id)a2 address:(id)a3 loginName:(id)a4 type:(id)a5 recentContactIDNumber:(id)a6;
- (id)loginName;
- (id)initWithFirstName:(id)a0 lastName:(id)a1 displayedName:(id)a2 address:(id)a3 loginName:(id)a4 type:(id)a5;
- (id)recentContactIDNumber;

@end
