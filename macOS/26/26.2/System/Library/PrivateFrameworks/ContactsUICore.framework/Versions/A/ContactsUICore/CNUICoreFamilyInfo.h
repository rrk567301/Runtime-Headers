@class NSArray, CNContact;

@interface CNUICoreFamilyInfo : NSObject

@property (readonly, nonatomic) CNContact *meContact;
@property (readonly, nonatomic) NSArray *elements;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithMeContact:(id)a0 elements:(id)a1;

@end
