@class NSString;

@interface CNContactPosterNameComponents : NSObject

@property (copy) NSString *firstNameComponent;
@property (copy) NSString *secondNameComponent;
@property long long emphasizedNameComponentIndex;
@property long long singleNameComponentIndex;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)init;

@end
